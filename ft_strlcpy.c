/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 07:43:41 by omejri            #+#    #+#             */
/*   Updated: 2026/11/01 15:06:25 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t buffer)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (!dest)
		return (src_len);
	if (buffer == 0)
		return (src_len);
	while (buffer > 1 && src[i])
	{
		dest[i] = src[i];
		i++;
		buffer--;
	}
	dest[i] = '\0';
	return (src_len);
}
