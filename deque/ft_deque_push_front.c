/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deque_push_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Teghjyot <tesingh@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:37:56 by Teghjyot          #+#    #+#             */
/*   Updated: 2024/03/06 15:37:56 by Teghjyot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"
#include "libft.h"

void    ft_deque_push_front(t_deque **begin_deque, void *data)
{
	t_deque	*push;
	t_deque	*last;

	push = ft_create_deque_elem(data);
    if (*begin_deque)
    {
		last = (*begin_deque)->previous;
        push->next = *begin_deque;
		push->previous = last;
		(*begin_deque)->previous = push;
		last->next = push;
        *begin_deque = push;
    }
    else
		*begin_deque = push;
}
