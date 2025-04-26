/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:23:33 by rnomoto           #+#    #+#             */
/*   Updated: 2025/03/17 21:08:13 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// NULL input is undefined in man 3 printf.
// But the original printf support it.

int	case_s(va_list *ap, int len)
{
	char	*str;

	str = va_arg(*ap, char *);
	if (str == NULL)
	{
		len = print_s("(null)", len);
		return (len);
	}
	return (print_s(str, len));
}
