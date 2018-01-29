/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_num.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoupez <ccoupez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 16:45:07 by ccoupez           #+#    #+#             */
/*   Updated: 2018/01/24 11:35:44 by ccoupez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *handle_sign_b10(va_list *args, t_printf *my_struc)
{
    long long new_arg;
    new_arg = get_signed_arg(args, my_struc);
    return (ft_lltoa_base(new_arg, 10, 0));
}

char    *handle_unsign_b10(va_list *args, t_printf *my_struc)
{
    unsigned long long new_arg;

    new_arg = get_unsigned_arg(args, my_struc);
    return (ft_ulltoa_base(new_arg, 10, 0));
}

char    *handle_unsign_b16_min(va_list *args, t_printf *my_struc)
{
    unsigned long long new_arg;

    new_arg = get_unsigned_arg(args, my_struc);
    return (ft_ulltoa_base(new_arg, 16, 0));
}

char    *handle_unsign_b16_maj(va_list *args, t_printf *my_struc)
{
    unsigned long long new_arg;

    new_arg = get_unsigned_arg(args, my_struc);
    return (ft_ulltoa_base(new_arg, 16, 1));
}

char    *handle_unsign_b8(va_list *args, t_printf *my_struc)
{
    unsigned long long new_arg;

    new_arg = get_unsigned_arg(args, my_struc);
    return (ft_ulltoa_base(new_arg, 8, 0));
}