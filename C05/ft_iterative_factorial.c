/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujebor <mujebor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 15:23:09 by mujebor           #+#    #+#             */
/*   Updated: 2026/03/16 13:44:57 by mujebor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}

int	main(void)
{
	int	nb;

	nb = 5;
	printf("%d\n", nb);
	printf("The Factorial numebr is %d", ft_iterative_factorial(nb));
	return (0);
}
