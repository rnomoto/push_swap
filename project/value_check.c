/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   value_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 09:55:50 by rnomoto           #+#    #+#             */
/*   Updated: 2025/05/13 11:12:03 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

//check argument before puttig to ft_atoi.
static int ft_isinteger(const char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] < '0' || str[i] > '9') && str[i] != '-')
            return 1;
        else if (str[i] == '-' && i != 0)
            return 1;
        i++;
    }
    return 0;
}

int value_check(int argc, char **argv)
{
    int i;
    
    i = 0;
    while (i < argc - 1)
    {
        if (ft_isinteger(argv[i + 1]) == 1)
            return 1;
        i++;
    }
    return 0;
}
