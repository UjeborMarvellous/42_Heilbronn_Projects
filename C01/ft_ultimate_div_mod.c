/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujebor <mujebor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 05:01:31 by mujebor           #+#    #+#             */
/*   Updated: 2026/03/04 13:36:23 by mujebor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/* int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 3;

	ft_ultimate_div_mod(&x, &y);
	printf("After division and modulo: x = %d, y = %d\n", x, y);
	return (0);
} */
