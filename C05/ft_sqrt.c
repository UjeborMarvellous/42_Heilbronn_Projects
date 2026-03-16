/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujebor <mujebor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 02:55:14 by mujebor           #+#    #+#             */
/*   Updated: 2026/03/15 20:04:51 by mujebor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (nb < 0)
		return (0);
	while (res <= nb && i <= 46340)
	{
		res = i * i;
		if (res == nb)
			return (i);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	printf("%i", ft_sqrt(25));
} */
