/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:46:31 by rnomoto           #+#    #+#             */
/*   Updated: 2025/04/26 20:35:34 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>
#include <stdlib.h>	

int push(int **from_p, int *from_size, int **to_p, int *to_size)
{
	int *tmp;
	int i;

	if (*from_size == 0)
		return 0;
	tmp = (int *)malloc(sizeof(int) * (*to_size + 1));
	if (tmp == NULL)
		return -1;
	tmp[0] = **from_p;
	i = 0;
	while (i < *to_size)
	{
		tmp[i + 1] = (*to_p)[i];
		i++;
	}
	free(*to_p);
	*to_p = tmp;
	*to_size += 1;

	*from_p = *from_p + 1;
	*from_size -= 1;

	return 0;
}


int main(void)
{
	int a_size = 5;
	int *stack_a = (int *)malloc(sizeof(int) * a_size);
	int i = 0;
	while (i < a_size)
	{
		stack_a[i] = i + 1;
		i++;
	}
	int b_size = 4;
	int *stack_b = (int *)malloc(sizeof(int) * b_size);
	i = 0;
	while (i < b_size)
	{
		stack_b[i] = i + 6;
		i++;
	}
	
	//pa (push a)
	push(&stack_b, &b_size, &stack_a, &a_size);
	i = 0;
	while (i < a_size)
	{
		printf("stack_a[%d]: %d\n", i, stack_a[i]);
		i++;
	}
	printf("a_size: %d\n", a_size);
	i = 0;
	while (i < b_size)
	{
		printf("stack_b[%d]: %d\n", i, stack_b[i]);
		i++;
	}
	printf("b_size: %d\n", b_size);

	free(stack_a);
	free(stack_b - 1);
	return 0;
}

