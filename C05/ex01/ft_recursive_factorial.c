/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilal <abilal@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:34:11 by abilal            #+#    #+#             */
/*   Updated: 2024/07/09 15:32:16 by abilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0);
	{
		return (0);
	}
	if (nb == 1)
		return (nb);
	return (nb * ft_recursive_factorial(nb - 1));
}
#include <stdio.h>

int	ft_recursive_factorial2(int	nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial2(nb - 1);
		nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (result);
}

int	main(void)
{
	int	n = 10;
	printf("Correction : %i \n", ft_recursive_factorial2(n));
	printf("Result : %i \n", ft_recursive_factorial(n));
}