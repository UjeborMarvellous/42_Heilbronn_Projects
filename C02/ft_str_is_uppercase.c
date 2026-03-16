/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujebor <mujebor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:24:20 by mujebor           #+#    #+#             */
/*   Updated: 2026/03/05 13:54:08 by mujebor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
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

	str1 = "HELLO";
	str2 = "Hello";
	str3 = "";
	write(1, "Test 1: ", 8);
	if (ft_str_is_uppercase(str1))
		write(1, "Uppercase\n", 10);
	else
		write(1, "Not Uppercase\n", 15);
	write(1, "Test 2: ", 8);
	if (ft_str_is_uppercase(str2))
		write(1, "Uppercase\n", 10);
	else
		write(1, "Not Uppercase\n", 15);
	write(1, "Test 3: ", 8);
	if (ft_str_is_uppercase(str3))
		write(1, "Uppercase\n", 10);
	else
		write(1, "Not Uppercase\n", 15);
	return (0);
} */
