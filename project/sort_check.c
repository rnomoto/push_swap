/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 09:41:21 by rnomoto           #+#    #+#             */
/*   Updated: 2025/05/13 11:18:16 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int sort_check(int argc, char **argv)
{
	int i;
	
	i = 0;
	while (i + 2 < argc)
	{
		if (ft_atoi(argv[i + 1]) > ft_atoi(argv[i + 2]))
			return 1;
		i++;
	}
	return 0;
}

/*
int main(int argc, char **argv)
{
    if (sort_check(argc, argv) == 0)
        printf("sorted.\n");
    else
        printf("not sorted.\n");
    return 0;
}
*/
