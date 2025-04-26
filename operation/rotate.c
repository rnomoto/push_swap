/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:54:48 by rnomoto           #+#    #+#             */
/*   Updated: 2025/04/26 18:10:55 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

void rotate(char *stack)
{
	char tmp;
	size_t i;

	i = 0;
	tmp = stack[0];
	while (stack[i + 1] != '\0')
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[i] = tmp;
}

void rotate_both(char *stack_a, char *stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}

int main(void)
{
	char stack_a[] = "0123456789";
	char stack_b[] = "abcdefghij";

	rotate(stack_a);
	printf("ra: %s\n", stack_a);

	rotate_both(stack_a, stack_b);
	printf("rr_a: %s\n", stack_a);
	printf("rr_b: %s\n", stack_b);

	return 0;
}

