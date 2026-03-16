/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujebor <mujebor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:58:27 by mujebor           #+#    #+#             */
/*   Updated: 2026/03/05 14:40:52 by mujebor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (new_word && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (!new_word && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = "hello, world! 42foo bar";
	str2 = "42foo bar";
	str3 = "hello,world!";
	write(1, "Test 1: ", 8);
	write(1, str1, 27);
	write(1, "\nCapitalized: ", 14);
	ft_strcapitalize(str1);
	write(1, str1, 27);
	write(1, "Test 2: ", 8);
	write(1, str2, 11);
	write(1, "\nCapitalized: ", 14);
	ft_strcapitalize(str2);
	write(1, str2, 11);
	write(1, "Test 3: ", 8);
	write(1, str3, 13);
	write(1, "\nCapitalized: ", 14);
	ft_strcapitalize(str3);
	write(1, str3, 13);
	return (0);
} */
