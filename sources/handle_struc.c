/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_struc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoupez <ccoupez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 13:59:44 by ccoupez           #+#    #+#             */
/*   Updated: 2018/02/16 12:36:44 by ccoupez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_printf	*initialize_struct(t_printf *p)
{
	if (p)
	{
		if (p->flags)
			ft_strdel(&(p)->flags);
		p->flags = ft_strnew(7);
		p->width = 0;
		p->prec = -1;
		p->size = "NO";
		p->sign = 0;
		p->len_arg = 0;
		p->type = 0;
	}
	return (p);
}

void		free_struc(t_printf *p)
{
	if (p->flags)
		ft_strdel(&(p)->flags);
	free(p);
}
