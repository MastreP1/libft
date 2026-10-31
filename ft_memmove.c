/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:59:43 by omejri            #+#    #+#             */
/*   Updated: 2026/10/31 14:32:02 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int	i;
	int	rev;

	if (!dest || !src)
		return (NULL);
	i = 0;
	rev = len - 1;
	while (len > 0)
	{
		if (dest < src)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
		if (dest > src)
		{
			((unsigned char *)dest)[rev] = ((unsigned char *)src)[rev];
			rev--;
		}
		len--;
	}
	return (dest);
}
