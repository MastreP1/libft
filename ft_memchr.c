/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 18:27:51 by omejri            #+#    #+#             */
/*   Updated: 2026/10/30 07:41:46 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *b, int c, size_t len)
{
	int	i;

	i = 0;
	while (i <= len)
	{
		if (((unsigned char *)b)[i] == (unsigned char)c)
		{
			printf("%d\n", ((unsigned char *)b)[i]);
			return (&b[i]);
		}
		i++;
	}
	return (0);
}
