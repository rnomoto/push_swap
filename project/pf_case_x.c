/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_case_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:34:00 by rnomoto           #+#    #+#             */
/*   Updated: 2025/05/13 11:42:13 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	putnbr_hexa(unsigned int n, char *base, int len)
{
	if (len == -1)
		return (-1);
	if (n >= (unsigned int)ft_strlen(base))
		len = putnbr_hexa(n / 16, base, len);
	len = print_c(base[n % 16], len);
	return (len);
}

int	case_x(va_list *ap, int len, char sign)
{
	int	n;

	n = va_arg(*ap, int);
	if (sign == 'x')
		return (putnbr_hexa(n, "0123456789abcdef", len));
	return (putnbr_hexa(n, "0123456789ABCDEF", len));
}
