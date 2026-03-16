/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujebor <mujebor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 05:03:44 by mujebor           #+#    #+#             */
/*   Updated: 2026/03/04 13:39:57 by mujebor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h> */

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/* int	main(void)
{
	char	*message;

	message = "Hello, World!\n";
	ft_putstr(message);
	return (0);
} */
