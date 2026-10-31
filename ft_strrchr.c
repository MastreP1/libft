/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 07:44:11 by omejri            #+#    #+#             */
/*   Updated: 2026/10/31 15:02:08 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	i;
	int	mark;

	if (!s)
		return (NULL);
	i = 0;
	mark = '\0';
	while (s[i])
	{
		if (s[i] == c)
		{
			mark = i;
		}
		i++;
	}
	if (mark != '\0')
	{
		return (&s[mark]);
	}
	else
	{
		return (0);
	}
}
