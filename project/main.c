/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:18:42 by rnomoto           #+#    #+#             */
/*   Updated: 2025/05/13 08:56:15 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

typedef struct s_stack
{
	int value;
	int index;
	struct s_stack *prev;
	struct s_stack *next;
} t_stack;

t_stack *put_value_to_stack(int argc, char **argv)
{
	t_stack *stack;
	t_stack *head;
	int i;
	
	stack = (t_stack *)malloc(sizeof(t_stack)); //null check
	if (stack == NULL)
		return NULL;
	i = 0;
	head = stack;
	while (i < argc - 1)
	{
		stack->value = atoi(argv[i + 1]);
		stack->index = i;
		stack->prev = stack;
		if (i < argc - 2)
		{
			stack->next = (t_stack *)malloc(sizeof(t_stack)); //null check
			if (stack->next == NULL)
			{
				free(stack);
				return NULL;
			}
			stack->next->prev = stack;
			stack = stack->next;
		}
		else
			stack->next = head;
		i++;
	}
	return head;
}

int main(int argc, char **argv)
{
	t_stack *stack_a;

	if (argc == 1)
		return 0;
	stack_a = put_value_to_stack(argc, argv);
	if (stack_a == NULL)
		return -1;
	
	//list check
	printf("value: %d\n", stack_a->value);
	printf("index: %d\n\n", stack_a->index);
	stack_a = stack_a->next;
	printf("value: %d\n", stack_a->value);
	printf("index: %d\n\n", stack_a->index);
	stack_a = stack_a->next;
	printf("value: %d\n", stack_a->value);
	printf("index: %d\n\n", stack_a->index);
	stack_a = stack_a->next;
	printf("value: %d\n", stack_a->value);
	printf("index: %d\n", stack_a->index);
	
	system("leaks a.out");

	return 0;
}
	    



