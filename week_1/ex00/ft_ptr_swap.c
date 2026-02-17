/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 2002mssm02 <2002mssm02@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 18:56:38 by 2002mssm02        #+#    #+#             */
/*   Updated: 2026/02/17 18:57:06 by 2002mssm02       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ptr_swap(int *a, int *b);

// int	main(void)
// {
// 	int	a = 5;
// 	int b = 10;

// 	ft_ptr_swap(&a, &b);
// 	printf("a: %d, b: %d\n", a, b);
// 	return (0);
// }

void	ft_ptr_swap(int *a, int *b)
{
	int	temp_val;

	temp_val = *a;
	*a = *b;
	*b = temp_val;
}
