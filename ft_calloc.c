/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:51:21 by omejri            #+#    #+#             */
/*   Updated: 2026/11/05 19:51:21 by omejri           ###   ########.fr       */
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
