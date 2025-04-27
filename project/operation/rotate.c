/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:54:48 by rnomoto           #+#    #+#             */
/*   Updated: 2025/04/26 20:29:19 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void rotate(int *stack, int *size)
{
	int tmp;
	int i;

	i = 0;
	tmp = stack[0];
	while (i + 1 < *size)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[i] = tmp;
}


int main(void)
{
	int size = 5;
	int stack[] = {1, 2, 3, 4, 5};

	rotate(stack, &size);
	int i = 0;
	while (i < size)
	{
		printf("stack[%d]: %d\n", i, stack[i]);
		i++;
	}
	printf("size: %d\n", size);
	return 0;
}

