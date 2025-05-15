/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 20:24:12 by rnomoto           #+#    #+#             */
/*   Updated: 2025/05/13 11:42:23 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	print_s(char *str, int len)
{
	size_t	count;

	count = ft_strlen(str);
	if (len == -1)
		return (-1);
	if (write(1, str, count) == -1)
		return (-1);
	return (len + count);
}
