/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomoto <rnomoto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:46:31 by rnomoto           #+#    #+#             */
/*   Updated: 2025/04/26 17:53:26 by rnomoto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

void *ft_memset(void *mem, int c, size_t n)
{
	unsigned char *mem_cast;
	unsigned char c_cast;
	size_t i;

	i = 0;
	mem_cast = (unsigned char *)mem;
	c_cast = (unsigned char)c;
	while (i < n)
	{
		mem_cast[i] = c_cast;
		i++;
	}
	return mem_cast;
}

void *ft_calloc(size_t nmemb, size_t size)
{
	size_t len;
	char *ret;

	len = nmemb * size;
	if ((size != 0 && nmemb != 0) && SIZE_MAX < len)
		return NULL;
	else if (nmemb == 0 || size == 0)
		len = 1;
	ret = (char *)malloc(len);
	if (ret == NULL)
		return NULL;
	ft_memset(ret, '\0', len);
	return ret;
}

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t check;

	i = 0;
	check = ft_strlen(src);
	if (size == 0)
		return check;
	while (src[i] != '\0' && size > 1)
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	dst[i] = '\0';
	return check;
}	

int push(char **start_p, char **goal_p)
{
	char *new_goal;

	if (**start_p == '\0')
		return 0;
	new_goal = (char *)ft_calloc(sizeof(char), ft_strlen(*goal_p) + 2);
	if (new_goal == NULL)
		return -1;
	*new_goal = **start_p;
	ft_strlcpy(new_goal + 1, *goal_p, ft_strlen(*goal_p) + 1);
	free(*goal_p);
	*goal_p = new_goal;
	*start_p = *start_p + 1;

	return 0;
}

/*
int main(void)
{
	char *stack_a = strdup("0123456789");
	if (stack_a == NULL)
		return 1;
	char *stack_b = strdup("abcdefghij");
	if (stack_b == NULL)
		return free(stack_a), 1;
	
	//pa (push a)
	push(&stack_b, &stack_a);
	printf("pa_a: %s\n", stack_a);
	printf("pa_b: %s\n", stack_b);

	return 0;
}
*/
