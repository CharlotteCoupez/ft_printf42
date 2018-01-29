/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoupez <ccoupez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:01:41 by ccoupez           #+#    #+#             */
/*   Updated: 2018/01/29 19:18:07 by ccoupez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*copy_until(char *format)
{
	size_t i;
	char *str;

	i = 0;
	while (format[i] != '%' && format[i] != '\0')
		i++;
	str = ft_strsub(format, 0, i);
	return (str);
}

static char	*handle_args(va_list *arg, t_printf *my_struc)
{
	int		i;
	char *str;
	char *error;

	error = "error";
	t_func  ptr_tab[] =
    {
        {&handle_c, 'c'}, {&handle_lc, 'C'}, {&handle_s, 's'},
		{&handle_ls, 'S'}, {&handle_sign_b10, 'd'}, {&handle_sign_b10, 'i'},
        {&handle_sign_b10, 'D'}, {&handle_unsign_b10, 'u'},
		{&handle_unsign_b10, 'U'}, {&handle_unsign_b16_min, 'x'},
        {&handle_unsign_b16_maj, 'X'}, {&handle_unsign_b16_min, 'p'},
        {&handle_unsign_b8, 'o'}, {&handle_unsign_b8, 'O'}, {NULL, -1}
	};
	i = 0;
	while (ptr_tab[i].key != -1)
	{
		if (ptr_tab[i].key == *my_struc->type)
		{
			str = ptr_tab[i].ptrfunc(arg, my_struc);
			printf("ptr_tab :%s\n", my_struc->type);
			return (str);
		}
		i++;
	}
	return (error);
}

static char	*analyse_format(t_printf *my_struc)
{
	char *psbl;

	if (*my_struc->f == '\0')
		return (NULL);
	psbl = "cCsSdDioOuUxXp0#-+ .hljz";
	while ((ft_strchr(psbl, *my_struc->f) || ft_isdigit(*my_struc->f)) && 
	*my_struc->f !='\0')
	{
			my_struc->f = ft_parse_flags(my_struc);
			my_struc->f = ft_parse_width(my_struc);
			my_struc->f = ft_parse_precision(my_struc);
			my_struc->f = ft_parse_size(my_struc);
			my_struc->f = ft_parse_type(my_struc);
			printf("flag :%s\n", my_struc->flags);
			printf("width :%d\n", my_struc->width);
			printf("precison :%d\n", my_struc->precision);
			printf("size :%s\n", my_struc->size);
			printf("type:%s\n", my_struc->type);
			printf("format :%s\n", my_struc->f);
		
	}
	printf("FORMAT 2:%s\n", my_struc->f);	
	if (!my_struc->f)
		return (NULL);
	return (my_struc->f);
}

/*char	*handle_format(t_printf *my_struc)
{
	
}*/

int		ft_printf(const char *format, ...)
{
	va_list		args;
	char		*str;
	char		*tmp;
	t_printf	*my_struc;
	size_t		len;


	len = 0;
	if(!(my_struc = (t_printf*)malloc(sizeof(t_printf))))
		return (-1);
	my_struc->f = ((char *)format);
	va_start(args, format);
	str = ft_strnew(0);
	tmp = ft_strnew(0);
	while (*my_struc->f)
	{
		str = ft_strjoin_free(str, copy_until(my_struc->f), 3);
		while (*my_struc->f != '%' && *my_struc->f != '\0')
			my_struc->f++;
		if (*my_struc->f == '%')
		{
			my_struc->f++;
			if (*my_struc->f != '%')
			{
				my_struc = initialize_struct(my_struc);
				my_struc->f = analyse_format(my_struc);
				printf("my_struc->f :%s\n", my_struc->f);
				tmp = handle_args(&args, my_struc);
				printf("variable recuperee :%s\n", tmp);
				//tmp = handle_format();
				str = ft_strjoin_free(str, tmp, 0);
				printf("str copy_until + var :%s\n", str);
			}
		}
	}
	printf("\n    final :%s\n", str);
	len = ft_strlen(str);
	printf("len moi %zu\n", len);
	va_end(args);
	return (len);
}

/*
				printf("flag :%s\n", my_struc->flags);
				printf("width :%d\n", my_struc->width);
				printf("precison :%d\n", my_struc->precision);
				printf("size :%s\n", my_struc->size);
				printf("type:%s\n", my_struc->type);
				printf("format :%s\n", format);*/
