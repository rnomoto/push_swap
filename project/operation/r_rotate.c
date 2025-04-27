/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:11:40 by rnomoto           #+#    #+#             */
/*   Updated: 2025/04/26 20:41:34 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void r_rotate(int *stack, int *size)
{
	int i;
	int tmp;


	i = *size - 1;
	tmp = stack[i];
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[i] = tmp;
}

int main(void)
{
	int stack[] = {1, 2, 3, 4, 5};
	int size = 5;

	r_rotate(stack, &size);
	int i = 0;
	while (i < size)
	{
		printf("stack[%d]: %d\n", i, stack[i]);
		i++;
	}
	return 0;
}

