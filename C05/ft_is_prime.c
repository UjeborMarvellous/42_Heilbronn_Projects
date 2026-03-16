/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujebor <mujebor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 03:08:25 by mujebor           #+#    #+#             */
/*   Updated: 2026/03/15 20:47:50 by mujebor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_prime(int num)
{
	int	pos;

	pos = 2;
	while ((pos < num) && ((num % pos) != 0))
		pos++;
	if (pos == num)
	{
		printf("\nEl número %d es primate awelo", pos);
		return (1);
	}
	else
		printf("\nEl número %d no es primo xq es divisible por %d", num, pos);
	return (0);
}

// int	main(void)
// {
// 	int	num;

// 	num = 31;
// 	printf("%d", num);

// 	ft_is_prime(num);
// 	return (0);
// }
