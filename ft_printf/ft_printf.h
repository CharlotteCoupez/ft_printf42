/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoupez <ccoupez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 09:21:46 by ccoupez           #+#    #+#             */
/*   Updated: 2018/01/29 16:43:33 by ccoupez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
#include <wchar.h>

typedef struct		s_printf
{
	char			*flags;
	int				width;
	int				precision; 
	char			*size;
	char			*type;
	char			*f;
}					t_printf;

typedef struct		s_func
{
	char			*(*ptrfunc) (va_list *agrs, t_printf *my_struc);
	char			key;
}					t_func;

int					ft_printf(const char *format, ...);

char				*ft_parse_flags(t_printf *arg);
char				*ft_parse_width(t_printf *arg);
char				*ft_parse_precision(t_printf *arg);
char				*ft_parse_size(t_printf *arg);
char				*ft_parse_type(t_printf *arg);

char				*handle_c(va_list *args, t_printf *type);
char				*handle_lc(va_list *args, t_printf *type);
char				*handle_s(va_list *args, t_printf *type);
char				*handle_ls(va_list *args, t_printf *type);
char    			*handle_sign_b10(va_list *args, t_printf *type);
char    			*handle_unsign_b10(va_list *args, t_printf *type);
char    			*handle_unsign_b16_min(va_list *args, t_printf *type);
char    			*handle_unsign_b16_maj(va_list *args, t_printf *type);
char    			*handle_unsign_b8(va_list *args, t_printf *type);

long long    		get_signed_arg(va_list *args, t_printf *flag);
unsigned long long  get_unsigned_arg(va_list *arg, t_printf *flag);

t_printf			*initialize_struct(t_printf	*my_struc);
void				free_struc(t_printf **my_struc);

#endif
