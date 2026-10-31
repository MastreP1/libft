/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 10:37:35 by omejri            #+#    #+#             */
/*   Updated: 2026/10/31 14:12:45 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*array;
	int		total;

	if (!number || !size)
		return (malloc(0));
	total = size * number;
	if (size != 0 && total / size == number)
	{
		array = malloc(number * size);
		if (!array)
			return (NULL);
		ft_bzero(array, number * size);
	}
	else
		return (malloc(0));
	return (array);
}
