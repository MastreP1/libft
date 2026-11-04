/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:15:41 by omejri            #+#    #+#             */
/*   Updated: 2026/11/04 13:53:15 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		((unsigned char *)s1)[i] = ((unsigned char *)s2)[i];
		i++;
		n--;
	}
	return (s1);
}
