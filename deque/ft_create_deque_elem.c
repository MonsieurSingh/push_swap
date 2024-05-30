/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_deque_elem.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tesingh <tesingh@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 06:15:29 by tesingh           #+#    #+#             */
/*   Updated: 2024/05/30 06:15:31 by tesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.h"
#include "libft.h"

t_deque	*ft_create_deque_elem(void *data)
{
	t_deque	*deque;

	deque = (t_deque *)malloc(sizeof(t_deque));
	if (!deque)
		return (NULL);
	ft_bzero(deque, sizeof(t_deque));
	deque->data = data;
	deque->next = deque;
	deque->previous = deque;
	return (deque);
}
