/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:33:54 by omejri            #+#    #+#             */
/*   Updated: 2026/10/30 06:41:47 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nub_count(int n)
{
	size_t	count;

	count = 1;
	if (n < 0)
	{
		n = n * -1;
		count++;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t	j;
	char	*nub;

	j = nub_count(n);
	nub = malloc(j + 1);
	nub[j] = '\0';
	if (n < 0)
	{
		nub[0] = '-';
		n = n * -1;
	}
	while (n > 9)
	{
		nub[j - 1] = (n % 10) + 48;
		n = n / 10;
		j--;
	}
	nub[j - 1] = n + 48;
	return (nub);
}
