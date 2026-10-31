/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omejri <omejri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:47:22 by omejri            #+#    #+#             */
/*   Updated: 2026/10/31 14:09:16 by omejri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *text)
{
	long	result;
	int		i;
	int		sign;

	result = 0;
	i = 0;
	sign = 1;
	if (!text)
		return (NULL);
	while ((text[i] >= 9 && text[i] <= 13) || text[i] == 32)
		i++;
	if (text[i] == '-')
	{
		sign = sign * -1;
		i++;
	}
	while (text[i] >= 48 && text[i] <= 57)
	{
		result = result * 10 + (text[i] - '0');
		i++;
	}
	return (result * sign);
}
