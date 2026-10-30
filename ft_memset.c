/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 09:39:06 by omejri            #+#    #+#             */
/*   Updated: 2026/10/30 07:41:50 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, const int c, size_t len)
{
	int	i;

	i = 0;
	while (len > 0)
	{
		((unsigned char *)dest)[i] = (unsigned char)c;
		len--;
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char s = 6;
	ft_memset(&s, 1337, 10);
	ft_memset(&s + 1, 5, 1);
	printf("%d\n", s);
}*/