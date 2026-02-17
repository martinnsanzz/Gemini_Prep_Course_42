/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 2002mssm02 <2002mssm02@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 18:59:33 by 2002mssm02        #+#    #+#             */
/*   Updated: 2026/02/17 19:07:28 by 2002mssm02       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

// int	main(void)
// {
// 	int	a = 10;
// 	int b = 4;

// 	printf("Div and mod %d and %d = ", a, b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("%d, %d\n", a, b);
// 	return (0);
// }

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_div;
	int	temp_mod;

	temp_div = *a / *b;
	temp_mod = *a % *b;
	*a = temp_div;
	*b = temp_mod;
}
