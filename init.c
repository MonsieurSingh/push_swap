/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tesingh <tesingh@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:31:38 by tesingh           #+#    #+#             */
/*   Updated: 2024/05/15 17:31:40 by tesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		print_deque(t_deque **a)
{
	t_deque *current;

	current = *a;
	while (current)
	{
		printf("index: %d, data: %d\n", current->index, ft_atoi((char *)current->data));
		current = current->next;
		if (current == *a)
			break;
	}
}

static size_t	arg_len(char **argv)
{
	size_t	count;

	count = 0;
	while (*argv)
	{
		count++;
		argv++;
	}
	return (count);
}

void	init(t_deque **a, t_deque **b, int argc, char **argv) {
	size_t	size;

	if (argc != 2)
		argv = argv + 1;
	size = arg_len(argv);
	*a = ft_deque_push_strs(size, argv);
	
	printf("A:\n");
	print_deque(a);
	printf("B:\n");
	print_deque(b);
}
