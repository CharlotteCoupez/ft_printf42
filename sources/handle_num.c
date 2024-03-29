/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoupez <ccoupez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 16:45:07 by ccoupez           #+#    #+#             */
/*   Updated: 2018/02/15 14:18:58 by ccoupez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char	*mng_sb10(va_list *args, t_printf *p)
{
	long long new_arg;

	new_arg = get_signed_arg(args, p);
	if (new_arg < 0)
		p->sign = 1;
	return (ft_lltoa_base(new_arg, 10));
}

char	*mng_ub10(va_list *args, t_printf *p)
{
	unsigned long long new_arg;

	new_arg = get_unsigned_arg(args, p);
	return (ft_ulltoa_base(new_arg, 10, 0));
}

char	*mng_ub16_min(va_list *args, t_printf *p)
{
	unsigned long long new_arg;

	new_arg = get_unsigned_arg(args, p);
	return (ft_ulltoa_base(new_arg, 16, 0));
}

char	*mng_ub16_maj(va_list *args, t_printf *p)
{
	unsigned long long new_arg;

	new_arg = get_unsigned_arg(args, p);
	return (ft_ulltoa_base(new_arg, 16, 1));
}

char	*mng_ub8(va_list *args, t_printf *p)
{
	unsigned long long new_arg;

	new_arg = get_unsigned_arg(args, p);
	return (ft_ulltoa_base(new_arg, 8, 0));
}
