/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:15:41 by omejri            #+#    #+#             */
/*   Updated: 2026/10/31 14:27:55 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	int	i;

	if (!dest || !src)
		return (NULL);
	i = 0;
	while (len > 0)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
		len--;
	}
	return (dest);
}
