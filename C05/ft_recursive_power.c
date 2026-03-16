/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujebor <mujebor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 23:35:51 by mujebor           #+#    #+#             */
/*   Updated: 2026/03/15 02:31:39 by mujebor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0 || nb == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

/* int	main(void)
{
	int	nb;
	int	power;

	nb = 5;
	power = 5;
	printf("%d\n", nb, power);
	printf("%d\n", ft_recursive_power(nb, power));
	return (0);
} */
