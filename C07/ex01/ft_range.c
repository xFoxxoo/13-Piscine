/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilal <abilal@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:14:07 by abilal            #+#    #+#             */
/*   Updated: 2024/07/15 08:43:43 by abilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max) // 1, 9
{
	int	i;
	int	*arr;
	int	len;

	len = max - min;
	i = 0;
	if (max <= min)
		return (0);
	arr = (int *) malloc(sizeof(int) * len);
	if (arr == 0)
		return (0);
	while (min + i < max)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
