/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_va_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoupez <ccoupez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 16:30:45 by ccoupez           #+#    #+#             */
/*   Updated: 2018/01/29 19:13:17 by ccoupez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long long       get_signed_arg(va_list *args, t_printf *flag)
{
	long long i = 0;

	if (*flag->size == '\0' && *flag->type != 'D')
	{
		//printf("no size type signed");
		return (((long long)va_arg(*args, int)));
	}
	else if (*flag->size == 'h' && *(flag->size + 1) == 'h')
	{
		//printf("size hh type signed");
		return ((long long)((signed char)va_arg(*args, int)));
	}
	else if (*flag->size == 'h')
	{
		//printf("size h type signed");
		return ((long long)((short int)va_arg(*args, int)));
	}
	else if (*flag->size == 'l' && *(flag->size + 1) == 'l')
	{
		//printf("size ll type signed");
		return (((long long)va_arg(*args, long long)));
	}
	else if (*flag->size == 'l' || *flag->type == 'D')
	{
		//printf("size l ou type D type signed");
		return (((long long)va_arg(*args, long)));
	}
	else if (*flag->size == 'j')
	{
		//printf("size j type signed");
		return (((long long)va_arg(*args, intmax_t)));
	}
	else if (*flag->size == 'z')
	{
		//printf("size z type signed");
		return (((long long)va_arg(*args, size_t)));
	}
	else
		return (i);

}

unsigned long long  get_unsigned_arg(va_list *args, t_printf *flag)
{
	unsigned long long i = 0;
	if (*flag->size == '\0' && *flag->type != 'U' && *flag->type != 'O'
	&& *flag->type != 'p')
	{
		printf("no size type UNsigned");
		return (((unsigned long long)va_arg(*args, unsigned int)));
	}
	else if (*flag->size == '\0' && *flag->type == 'p')
	{
		printf("size p type UNsigned");
		return (((unsigned long long)va_arg(*args, void *)));
	}
	else if (*flag->size == 'h' && *(flag->size + 1) == 'h')
	{
		printf("size hh type UNsigned");
		return ((unsigned long long)((unsigned char)va_arg(*args, int)));
	}
	else if (*flag->size == 'h')
	{	
		printf("size h type UNsigned");
		return ((unsigned long long)((unsigned short)va_arg(*args, int)));
	}
	else if (*flag->size == 'l' && *(flag->size + 1) == 'l')
	{
		printf("size ll type UNsigned");
		return (((unsigned long long)va_arg(*args, unsigned long long)));
	}
	else if (*flag->size == 'l' || *flag->type == 'U' || *flag->type == 'O')
	{
		printf("size l type UNsigned ou type U ou type O");
		return (((unsigned long long)va_arg(*args, unsigned long)));
	}
	else if (*flag->size == 'j')
	{
		printf("size j type UNsigned");
		return (((unsigned long long)va_arg(*args, intmax_t)));
	}
	else if (*flag->size == 'z')
	{
		printf("size z type UNsigned");
		return (((unsigned long long)va_arg(*args, size_t)));
	}
	else
		return (i);
}