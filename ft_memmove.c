/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:59:43 by omejri            #+#    #+#             */
/*   Updated: 2026/11/04 13:57:14 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	int	i;
	int	rev;

	i = 0;
	rev = n - 1;
	while (n > 0)
	{
		if (s1 < s2)
		{
			((unsigned char *)s1)[i] = ((unsigned char *)s2)[i];
			i++;
		}
		if (s1 > s2)
		{
			((unsigned char *)s1)[rev] = ((unsigned char *)s2)[rev];
			rev--;
		}
		n--;
	}
	return (s1);
}
