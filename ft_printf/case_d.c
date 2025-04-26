/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:01:07 by rnomoto           #+#    #+#             */
/*   Updated: 2025/03/17 21:20:20 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	putnbr_dec(int d, int len)
{
	long	d_long;

	d_long = d;
	if (len == -1)
		return (-1);
	if (d_long < 0)
	{
		len = print_c('-', len);
		d_long *= -1;
	}
	if (d_long >= 10)
		len = putnbr_dec(d_long / 10, len);
	len = print_c(d_long % 10 + 48, len);
	return (len);
}

int	case_d(va_list *ap, int len)
{
	int	d;

	d = va_arg(*ap, int);
	return (putnbr_dec(d, len));
}
