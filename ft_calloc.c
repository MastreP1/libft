/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 10:37:35 by omejri            #+#    #+#             */
/*   Updated: 2026/11/04 15:24:41 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*array;

	if (n == 0 || size == 0)
		return (malloc(1));
	if (size != 0 && (n * size) / size != n)
		return (NULL);
	array = malloc(n * size);
	if (!array)
		return (NULL);
	ft_bzero(array, n * size);
	return (array);
}
