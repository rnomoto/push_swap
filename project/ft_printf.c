/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:34:41 by rnomoto           #+#    #+#             */
/*   Updated: 2025/05/13 11:42:32 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		len;
	int		i;

	i = 0;
	va_start(ap, format);
	len = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			len = print_c(format[i], len);
		}
		else if (format[i] == '%')
		{
			i++;
			len = convert(format[i], &ap, len);
		}
		if (len == -1)
			break ;
		i++;
	}
	va_end(ap);
	return (len);
}
