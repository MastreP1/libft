/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 07:43:41 by omejri            #+#    #+#             */
/*   Updated: 2026/10/31 16:19:19 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	f_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

int	ft_strlcpy(char *src, char *dest, size_t buffer)
{
	int	i;
	int	src_len;

	if (!src || !dest)
		return (0);
	i = 0;
	src_len = f_strlen(src);
	if (buffer <= 0)
		return (0);
	while (buffer > 1 && src[i])
	{
		dest[i] = src[i];
		i++;
		buffer--;
	}
	dest[i] = '\0';
	return (src_len);
}
