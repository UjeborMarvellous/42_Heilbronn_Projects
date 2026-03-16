/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujebor <mujebor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:02:41 by mujebor           #+#    #+#             */
/*   Updated: 2026/03/05 13:53:50 by mujebor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/* int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = "12345";
	str2 = "Hello123";
	str3 = "";
	write(1, "Test 1: ", 8);
	if (ft_str_is_numeric(str1))
		write(1, "Numeric\n", 8);
	else
		write(1, "Not Numeric\n", 12);
	write(1, "Test 2: ", 8);
	if (ft_str_is_numeric(str2))
		write(1, "Numeric\n", 8);
	else
		write(1, "Not Numeric\n", 12);
	write(1, "Test 3: ", 8);
	if (ft_str_is_numeric(str3))
		write(1, "Numeric\n", 8);
	else
		write(1, "Not Numeric\n", 12);
	return (0);
} */
