/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 2002mssm02 <2002mssm02@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 09:52:36 by 2002mssm02        #+#    #+#             */
/*   Updated: 2026/02/18 10:05:19 by 2002mssm02       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < len)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (len);
}
