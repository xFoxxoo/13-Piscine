/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilal <abilal@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 21:15:55 by abilal            #+#    #+#             */
/*   Updated: 2024/06/30 11:00:25 by abilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	temp;
	int	last;

	last = size - 1;
	first = 0;
	while (first < (size / 2))
	{
		temp = tab[first];
		tab[first] = tab[last - first];
		tab[last - first] = temp;
		first++;
	}
}
