/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujebor <mujebor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 11:51:40 by mujebor           #+#    #+#             */
/*   Updated: 2026/03/12 13:21:55 by mujebor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

/* int	main(void)
{
	write(1, "Test 1 : ", 9);
	ft_putnbr(50);
	write(1, "\n", 1);
	write(1, "Test 2 : ", 9);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	write(1, "Test 3 : ", 9);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	write(1, "Test 4 : ", 9);
	ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
} */
