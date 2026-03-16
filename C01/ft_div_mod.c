/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujebor <mujebor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 04:57:45 by mujebor           #+#    #+#             */
/*   Updated: 2026/03/04 13:32:41 by mujebor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 3;

	ft_div_mod(a, b, &div, &mod);
	printf("Division: %d, Modulo: %d\n", div, mod);
	return (0);
} */
