/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujebor <mujebor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 05:05:27 by mujebor           #+#    #+#             */
/*   Updated: 2026/03/04 13:45:59 by mujebor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_strlen(const char *str)
{
	char	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

/* int	main(void)
{
	const char	*str;

	str = "Hello, World!";

	ft_strlen(str);

	printf("Length of '%s' is %d\n", str, ft_strlen(str));
	return (0);
} */
