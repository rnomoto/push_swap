/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:18:42 by rnomoto           #+#    #+#             */
/*   Updated: 2025/05/13 11:17:14 by rnomoto          ###   ########.fr       */
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

t_stack *make_stack(int argc, char **argv)
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
		stack->value = ft_atoi(argv[i + 1]);
		stack->index = i;
		if (i + 1 < argc - 1)
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

	//if no value put
	if (argc == 1)
		return 0;
		
	//check all of arguments are integer
	if (value_check(argc, argv) == 1)
	{
		//ft_printf("Error. Input must be integer.\n");
		printf("Error. Input must be integer.\n");
		return 1;
	}
		
	//if one value put or values are already sorted
	if (argc == 2 || sort_check(argc, argv) == 0)
		return 0;
	
	//make stack and put value to it.
	stack_a = make_stack(argc, argv);
	if (stack_a == NULL)
		return -1;
	
	//circular linked list check
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
	    



