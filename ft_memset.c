/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:39:06 by omejri            #+#    #+#             */
/*   Updated: 2026/10/31 14:35:53 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, const int c, size_t len)
{
	int	i;

	if (!dest)
		return (NULL);
	i = 0;
	while (len > 0)
	{
		((unsigned char *)dest)[i] = (unsigned char)c;
		len--;
		i++;
	}
	return (dest);
}
