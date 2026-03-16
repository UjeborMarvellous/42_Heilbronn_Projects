/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujebor <mujebor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 13:44:26 by mujebor           #+#    #+#             */
/*   Updated: 2026/03/05 13:54:24 by mujebor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	*str;

	str = "Hello, World!";
	write(1, "Original: ", 10);
	write(1, str, 13);
	write(1, "\nUppercase: ", 12);
	ft_strupcase(str);
	write(1, str, 13);
	write(1, "\n", 1);
	return (0);
} */
