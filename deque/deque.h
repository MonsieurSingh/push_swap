/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tesingh <tesingh@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 06:16:20 by tesingh           #+#    #+#             */
/*   Updated: 2024/05/30 06:16:25 by tesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef deque_h
# define deque_h

# include <stdlib.h>
# include "stdbool.h"

typedef struct	s_deque
{
	struct s_deque	*previous;
	struct s_deque	*next;
	struct s_deque	*target;
	void			*data;
	bool			cheapest;
	bool			half;
	unsigned int	index;
	unsigned int	cost;

}	t_deque;

t_deque	*ft_create_deque_elem(void *data);
t_deque	*ft_deque_last(t_deque *begin_deque);
void	ft_deque_push_back(t_deque **begin_deque, void *data);
void    ft_deque_push_front(t_deque **begin_deque, void *data);
t_deque	*ft_deque_push_strs(size_t size, char **strs);

#endif /* deque_h */
