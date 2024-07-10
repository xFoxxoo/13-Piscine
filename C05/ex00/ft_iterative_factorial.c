/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilal <abilal@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:26:08 by abilal            #+#    #+#             */
/*   Updated: 2024/07/09 15:22:39 by abilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	j;

	i = 0;
	j = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (j > 1)
	{
		nb = nb * (j - 1);
		j--;
	}
	return (nb);
}
