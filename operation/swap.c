/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:31:12 by rnomoto           #+#    #+#             */
/*   Updated: 2025/04/26 15:54:43 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
//#include <stdio.h>

void swap(char *stack)
{
	char tmp;

	if (ft_strlen(stack) <= 1)
		return;
	tmp = stack[0];
	stack[0] = stack[1];
	stack[1] = tmp;
}

void swap_both(char *stack_a, char *stack_b)
{
	swap(stack_a);
	swap(stack_b);
}

/*
int main(void)
{
	char stack_a[] = "0123456789";
	char stack_b[] = "abcdefghij";

	swap(stack_a);
	printf("swap_a: %s\n", stack_a);

	swap(stack_a);
	swap_both(stack_a, stack_b);
	printf("swap_both_a: %s\n", stack_a);
	printf("swap_both_b: %s\n", stack_b);

	return 0;
}
*/

