/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:31:12 by rnomoto           #+#    #+#             */
/*   Updated: 2025/04/26 19:28:02 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void swap(int *stack, int size)
{
	int tmp;

	if (size <= 1)
		return;
	tmp = stack[0];
	stack[0] = stack[1];
	stack[1] = tmp;
}

int main(void)
{
	int stack_a[] = {1, 2, 3, 4, 5};

	swap(stack_a, 5);
	int i = 0;
	while (i < 5)
	{
		printf("stack[%d]: %d\n", i, stack_a[i]);
		i++;
	}
	return 0;
}

