/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_struc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoupez <ccoupez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 13:59:44 by ccoupez           #+#    #+#             */
/*   Updated: 2018/01/29 19:27:17 by ccoupez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_printf	*initialize_struct(t_printf	*my_struc)
{
	if (my_struc)
	{	
		my_struc->flags = ft_strnew(6);
		my_struc->width = 0;
		my_struc->precision = 0;
		my_struc->size = ft_strnew(2);
		my_struc->type = ft_strnew(1);
	}
	return (my_struc);
}

/*void	free_struc(t_printf **my_struc)
{
	//a faire
}*/

/*char	*handle_flags(char *str, t_printf *my_struc)
{
	+- 0#
	return (str);
}

char	*handle_precision(char *str)
{
	return (str);
}

char	*handle_width(char *str)
{
	return (str);
}*/