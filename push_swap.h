/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tesingh <tesingh@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 06:16:48 by tesingh           #+#    #+#             */
/*   Updated: 2024/05/30 06:16:52 by tesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include "libft.h"
# include "deque/deque.h"

void	init(t_deque **a, t_deque **b, int argc, char **argv);
int		verify(char **arguments);

#endif /* PUSH_SWAP_H */
