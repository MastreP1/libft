/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 07:43:37 by omejri            #+#    #+#             */
/*   Updated: 2026/11/01 15:06:23 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dest;
	size_t	len_src;

	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	len_dest = ft_strlen(dst);
	if (size <= len_dest)
		return (size + len_src);
	i = 0;
	while ((len_dest + i + 1) < size && src[i])
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	dst[len_dest + i] = '\0';
	return (len_dest + len_src);
}
