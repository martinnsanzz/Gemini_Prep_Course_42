/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 2002mssm02 <2002mssm02@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 09:39:13 by 2002mssm02        #+#    #+#             */
/*   Updated: 2026/02/18 09:51:09 by 2002mssm02       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*arr;

	if (min >= max)
		return (NULL);
	len = max - min;
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	return (&arr[0]);
}
