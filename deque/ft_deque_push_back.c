/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_push_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Teghjyot <tesingh@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:37:56 by Teghjyot          #+#    #+#             */
/*   Updated: 2024/03/06 15:37:56 by Teghjyot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "deque.h"

void	ft_deque_push_back(t_deque **begin_deque, void *data)
{
	t_deque	*last;
	t_deque	*new_node;

	new_node = ft_create_deque_elem(data);
	if (*begin_deque)
	{
		last = ft_deque_last(*begin_deque);
		last->next = new_node;
		new_node->previous = last;
		new_node->next = *begin_deque;
		(*begin_deque)->previous = new_node;
	}
	else
		*begin_deque = new_node;
}
