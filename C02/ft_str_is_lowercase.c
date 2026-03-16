/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujebor <mujebor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:14:59 by mujebor           #+#    #+#             */
/*   Updated: 2026/03/05 13:54:01 by mujebor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
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

	str1 = "hello";
	str2 = "Hello";
	str3 = "";
	write(1, "Test 1: ", 8);
	if (ft_str_is_lowercase(str1))
		write(1, "Lowercase\n", 10);
	else
		write(1, "Not Lowercase\n", 15);
	write(1, "Test 2: ", 8);
	if (ft_str_is_lowercase(str2))
		write(1, "Lowercase\n", 10);
	else
		write(1, "Not Lowercase\n", 15);
	write(1, "Test 3: ", 8);
	if (ft_str_is_lowercase(str3))
		write(1, "Lowercase\n", 10);
	else
		write(1, "Not Lowercase\n", 15);
	return (0);
} */
