/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:17:19 by rnomoto           #+#    #+#             */
/*   Updated: 2025/03/17 21:08:46 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert(char sign, va_list *ap, int len)
{
	if (sign == 'c')
		len = case_c(ap, len);
	else if (sign == 's')
		len = case_s(ap, len);
	else if (sign == 'p')
		len = case_p(ap, len);
	else if (sign == 'd' || sign == 'i')
		len = case_d(ap, len);
	else if (sign == 'u')
		len = case_u(ap, len);
	else if (sign == 'x' || sign == 'X')
		len = case_x(ap, len, sign);
	else if (sign == '%')
		len = print_c('%', len);
	else
		return (-1);
	return (len);
}
