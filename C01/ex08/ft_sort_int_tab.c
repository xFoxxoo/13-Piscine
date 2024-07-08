/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilal <abilal@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 10:58:49 by abilal            #+#    #+#             */
/*   Updated: 2024/06/30 12:18:12 by abilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	first;
	int	temp;

	while (size >= 0)
	{
		first = 0;
		while (first < size -1)
		{
			if (tab[first] > tab[first + 1])
			{
				temp = tab[first];
				tab[first] = tab[first + 1];
				tab[first + 1] = temp;
			}
			first++;
		}
		size--;
	}
}
