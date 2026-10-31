/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 07:44:03 by omejri            #+#    #+#             */
/*   Updated: 2026/10/31 18:08:50 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char *big, char *little, int len)
{
	int	i;
	int	j;
	int	mark;

	i = 0;
	j = 0;
	mark = 0;
	while (len > 0)
	{
		if (big[i] == little[j])
		{
			mark = i;
			while (big[i] == little[j])
			{
				i++;
				j++;
			}
			if (little[j] == '\0')
				return (mark);
			j = 0;
		}
		i++;
		len--;
	}
	return (0);
}

char	*ft_strnstr(char *big, char *little, int len)
{
	int	i;

	if (!big)
		return (NULL);
	if (!little)
		return (big);
	i = 0;
	i = check(big,little,len);
	if (i)
		return (&big[i]);
	return (NULL);
}
