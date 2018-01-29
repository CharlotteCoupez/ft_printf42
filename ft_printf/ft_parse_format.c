/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoupez <ccoupez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 14:21:29 by ccoupez           #+#    #+#             */
/*   Updated: 2018/01/29 18:22:17 by ccoupez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_parse_flags(t_printf *my_struc)
{	
	size_t i;

	i = 0;
	while (my_struc->f[i] == '#' || my_struc->f[i] == '0' || my_struc->f[i] == '-'
	|| my_struc->f[i] == '+' || my_struc->f[i] == ' ')
			i++;
	 if (i > 0)
	 	my_struc->flags = ft_strncpy(my_struc->flags, my_struc->f, i);
	 my_struc->f += i;
	return (my_struc->f);
}

char	*ft_parse_width(t_printf *my_struc)
{
	
	printf("f ds func :%c\n", *my_struc->f);
	if ('0' < *my_struc->f && *my_struc->f <= '9')
	{
		my_struc->width = 0;
		while (ft_isdigit(*my_struc->f))
			my_struc->width = my_struc->width * 10 + ((*my_struc->f++) - '0');
	}
	printf("w ds func :%d\n", my_struc->width);
	return (my_struc->f);
}

char	*ft_parse_precision(t_printf *my_struc)
{
	
	if (*my_struc->f == '.')
	{
		my_struc->precision = 0;
		my_struc->f++;
		while (ft_isdigit(*my_struc->f))
			my_struc->precision = my_struc->precision * 10 + ((*my_struc->f++) - '0');
	}
	return (my_struc->f);
}

char	*ft_parse_size(t_printf *my_struc)
{
	if (*my_struc->f == 'h' && *(my_struc->f + 1) == 'h')
	{
		my_struc->size = "hh";
		return (my_struc->f + 2);
	}
	else if (*my_struc->f == 'l' && *(my_struc->f + 1) == 'l')
	{
		my_struc->size = "ll";
		return (my_struc->f + 2);
	}
	else if (*my_struc->f == 'h' || *my_struc->f == 'l' ||
			*my_struc->f == 'j' || *my_struc->f == 'z')
	{
		*my_struc->size = *my_struc->f;
		return (my_struc->f + 1);
	}
	return (my_struc->f);
}

char	*ft_parse_type(t_printf *my_struc)
{
	int		i;
	char	*letter;

	i = 0;
	letter = "dDiOoUuXxCcSsp";
	if (ft_strchr(letter, *my_struc->f))
	{
		*my_struc->type = *my_struc->f;
		return (my_struc->f + 1);
	}
//	else
//		return (ERROR);
	return (my_struc->f);
}