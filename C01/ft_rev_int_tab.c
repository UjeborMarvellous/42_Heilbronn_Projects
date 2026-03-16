/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mujebor <mujebor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 05:10:48 by mujebor           #+#    #+#             */
/*   Updated: 2026/03/04 15:54:02 by mujebor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/* int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Original array: ");
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

	ft_rev_int_tab(arr, size);

	printf("Reversed array: ");
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return	(0);
} */
