/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujebor <mujebor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:39:07 by mujebor           #+#    #+#             */
/*   Updated: 2026/03/05 13:54:16 by mujebor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
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

	str1 = "Hello, World!";
	str2 = "This is a test.";
	str3 = "Non-printable:\n";
	write(1, "Test 1: ", 8);
	if (ft_str_is_printable(str1))
		write(1, "String is printable.\n", 21);
	else
		write(1, "String is not printable.\n", 25);
	write(1, "Test 2: ", 8);
	if (ft_str_is_printable(str2))
		write(1, "String is printable.\n", 21);
	else
		write(1, "String is not printable.\n", 25);
	write(1, "Test 3: ", 8);
	if (ft_str_is_printable(str3))
		write(1, "String is printable.\n", 21);
	else
		write(1, "String is not printable.\n", 25);
	return (0);
} */
