/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:11:40 by rnomoto           #+#    #+#             */
/*   Updated: 2025/04/26 18:29:38 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while(s[i] != '\0')
		i++;
	return i;
}

void r_rotate(char *stack)
{
	size_t i;
	char tmp;


	i = ft_strlen(stack) - 1;
	tmp = stack[i];
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[i] = tmp;
}

void r_rotate_both(char *stack_a, char *stack_b)
{
	r_rotate(stack_a);
	r_rotate(stack_b);
}

int main(void)
{
	char *stack_a = strdup("0123456789");
	char *stack_b = strdup("abcdefghij");

	r_rotate(stack_a);
	printf("rra: %s\n", stack_a);

	r_rotate_both(stack_a, stack_b);
	printf("rrr_a: %s\n", stack_a);
	printf("rrr_b: %s\n", stack_b);

	free(stack_a);
	free(stack_b);

	return 0;
}

