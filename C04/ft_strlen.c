/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujebor <mujebor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 17:41:06 by mujebor           #+#    #+#             */
/*   Updated: 2026/03/11 03:06:47 by mujebor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

// int main(void)
// {
// 	const char *str = "Hello, World!";
// 	size_t length = ft_strlen(str);
// 	printf("Length of the string: %zu\n", length);
// 	return 0;
// }