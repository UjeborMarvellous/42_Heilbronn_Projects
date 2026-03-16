/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujebor <mujebor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 12:47:22 by mujebor           #+#    #+#             */
/*   Updated: 2026/03/05 13:53:40 by mujebor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/* int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "HelloWorld";
	str2 = "Hello123";
	write(1, "Test 1: ", 8);
	write(1, str1, 10);
	write(1, " -> ", 4);
	write(1, "Test 2: ", 8);
	write(1, str2, 8);
	write(1, " -> ", 4);
	write(1, "Test 3: ", 8);
	write(1, "(empty string)", 14);
	write(1, " -> ", 4);
	return (0);
} */
