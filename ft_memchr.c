/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:27:51 by omejri            #+#    #+#             */
/*   Updated: 2026/10/31 16:23:37 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *b, int c, size_t len)
{
	size_t	i;

	if (!b)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		if (((unsigned char *)b)[i] == (unsigned char)c)
		{
			return (((unsigned char *)b + i));
		}
		i++;
	}
	return (0);
}
