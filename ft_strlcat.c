/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 07:43:37 by omejri            #+#    #+#             */
/*   Updated: 2026/10/31 14:56:09 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

int	ft_strlcat(char *src, char *dest, int size)
{
	int	i;
	int	len_src;
	int	len_dest;

	if (!src || !dest)
		return (NULL);
	i = 0;
	len_src = ft_len(src);
	len_dest = ft_len(dest);
	while (len_src > 0 && size > 1)
	{
		dest[len_src] = src[i];
		len_src++;
		i++;
		size--;
	}
	dest[len_src] == '\0';
	return (len_dest + len_src);
}
