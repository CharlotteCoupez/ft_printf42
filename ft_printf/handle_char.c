/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoupez <ccoupez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 16:45:23 by ccoupez           #+#    #+#             */
/*   Updated: 2018/01/29 15:34:34 by ccoupez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

static char	*handle_unicode(wchar_t c)
{
	char	*str;

	str = ft_strnew(4);
	if (c <= 0x7F)
		str[0] = c;
	else if (c <= 0x7FF)
	{
		str[0] = (c >> 6) + 0xC0;
		str[1] = (c & 0x3F) + 0x80;
	}
	else if (c < 0xFFFF)
	{
		str[0] = (c >> 12) + 0xE0;
		str[1] = ((c >> 6) & 0x3F) + 0x80;
		str[2] = (c & 0x3F) + 0x80;
	}
	else
	{
		str[0] = ((c >> 18) + 0xF0);
		str[1] = ((c >> 12) & 0x3F) + 0x80;
		str[2] = ((c >> 6) & 0x3F) + 0x80;
		str[3] = (c & 0x3F) + 0x80;	
	}
	return (str);
}

char		*handle_c(va_list *args, t_printf *my_struc)
{
	char	*c;

	//printf("handle c");
	(void)(my_struc);
	c = ft_strnew(1);
	*c = va_arg(*args, int); //char
	return (c);
}

char		*handle_lc(va_list *args, t_printf *my_struc)
{
	wint_t	c;
	char	*c_unic;

	//printf("handle C ou lc");
	(void)(my_struc);
	c = va_arg(*args, wint_t);
	c_unic = handle_unicode(c);
	return (c_unic);
}

char		*handle_s(va_list *args, t_printf *my_struc)
{
	char	*str;

	//printf("handle s\n");
	(void)(my_struc);
	str = va_arg(*args, char *);
	return (str);
}

char		*handle_ls(va_list *args, t_printf *my_struc)
{
	wchar_t	*arg;
	char	*str_unic;
	int i;

	//printf("handle S ou ls");
	(void)(my_struc);
	i = 0;
	arg = va_arg(*args, wchar_t*);
	str_unic = ft_strnew(0);
	while (arg[i])
	{
		str_unic = ft_strjoin_free(str_unic, handle_unicode(arg[i]), 1);
		i++;
	}	
	//peut etre free arg
	return (str_unic);
}
