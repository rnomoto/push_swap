/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:41:45 by rnomoto           #+#    #+#             */
/*   Updated: 2025/03/17 20:30:35 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	convert(char sign, va_list *ap, int len);
int	case_c(va_list *ap, int len);
int	case_s(va_list *ap, int len);
int	case_p(va_list *ap, int len);
int	case_d(va_list *ap, int len);
int	case_u(va_list *ap, int len);
int	case_x(va_list *ap, int len, char sign);
int	print_c(char c, int len);
int	print_s(char *str, int len);

#endif
