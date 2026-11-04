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

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*array;

	if (nelem == 0)
		return (malloc(1));
	if (elsize != 0 && (nelem * elsize) / elsize != nelem)
		return (NULL);
	array = malloc(nelem * elsize);
	if (!array)
		return (NULL);
	ft_bzero(array, nelem * elsize);
	return (array);
}
