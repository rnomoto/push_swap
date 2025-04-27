/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:42:23 by rnomoto           #+#    #+#             */
/*   Updated: 2025/03/17 21:31:34 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// receive in void * and cast it to intptr_t?
// or receive in intptr_t from the beginning?

static int	putaddress(uintptr_t adr, int len)
{
	char	*base;

	base = "0123456789abcdef";
	if (len == -1)
		return (-1);
	else if (adr >= 16)
		len = putaddress(adr / 16, len);
	len = print_c(base[adr % 16], len);
	return (len);
}

int	case_p(va_list *ap, int len)
{
	void	*p;

	p = va_arg(*ap, void *);
	if (p == NULL)
	{
		len = print_s("(nil)", len);
		return (len);
	}
	len = print_s("0x", len);
	return (putaddress((uintptr_t)p, len));
}
