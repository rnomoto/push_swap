/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:18:42 by rnomoto           #+#    #+#             */
/*   Updated: 2025/04/26 19:18:54 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	int *stack_a;
	int i;

	stack_a = (int *)malloc(sizeof(int) * argc);
	if (stack_a == NULL)
		return -1;
	i = 0;
	while (i < argc)
	{
		stack_a[i] = ft_atoi(argv[i + 1]); //atoi should modificate
		i++;
	}
	/*
	sort algorythm
	*/

	return 0;
}
	    



