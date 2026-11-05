/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:33:54 by omejri            #+#    #+#             */
/*   Updated: 2026/11/01 15:05:20 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nub_count(long n)
{
	size_t	count;

	count = 1;
	if (n < 0)
	{
		n = -n;
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
	long	num;
	char	*nub;

	num = n;
	j = nub_count(num);
	nub = malloc(j + 1);
	if (!nub)
		return (NULL);
	nub[j] = '\0';
	if (num < 0)
	{
		nub[0] = '-';
		num = -num;
	}
	while (num > 9)
	{
		nub[j - 1] = (num % 10) + '0';
		num = num / 10;
		j--;
	}
	nub[j - 1] = (num % 10) + '0';
	return (nub);
}
