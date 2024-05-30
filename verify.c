/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tesingh <tesingh@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 08:53:42 by tesingh           #+#    #+#             */
/*   Updated: 2024/05/30 08:53:45 by tesingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	trim_arguments(char **arguments)
{
	char	*trimmed;

	while (*arguments)
	{
		trimmed = ft_strtrim(*arguments, " ");
		if (!trimmed)
			return (1);
		free(*arguments);
		*arguments = trimmed;
		arguments++;
	}
	return (0);
}

int	verify(char **arguments)
{
	int	i;
	int	j;

	i = 0;
	if (trim_arguments(arguments))
		return (1);
	while (arguments[i])
	{
		j = 0;
		while (arguments[i][j]) {
			if (j == 0 && arguments[i][j] != '-'
				&& arguments[i][j] != '+' && !ft_isdigit(arguments[i][j]))
				return (1);
			if (!ft_isdigit(arguments[i][j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
