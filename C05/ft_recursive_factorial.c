/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujebor <mujebor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 22:06:38 by mujebor           #+#    #+#             */
/*   Updated: 2026/03/15 15:59:25 by mujebor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_recursive_factorial(int n)
{
	if (n < 0)
		return (0);
	if (n <= 1)
		return (1);
	else
		return (n * ft_recursive_factorial(n - 1));
}

/* int	main(void)
{
	int	n;

	n = 4;
	printf("%d", ft_recursive_factorial(n));
	return (0);
} */
