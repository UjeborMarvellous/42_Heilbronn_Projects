/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujebor <mujebor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:45:26 by mujebor           #+#    #+#             */
/*   Updated: 2026/03/12 13:58:16 by mujebor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (res * sign);
}

// int	main(int ac, char **av)
// {
// 	int	mine;
// 	int	theirs;

// 	if (ac == 2)
// 	{
// 		mine = ft_atoi(av[1]);
// 		theirs = atoi(av[1]);
// 		printf("mine: %d | theirs: %d\n", mine, theirs);
// 	}
// 	return (0);
// }
