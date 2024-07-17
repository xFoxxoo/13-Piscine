/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilal <abilal@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:57:45 by abilal            #+#    #+#             */
/*   Updated: 2024/07/17 20:52:20 by abilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	x;

	x = nb / 2;
	if (nb <= 1)
		return (0);
	while (x >= 2)
	{
		if (nb % x == 0)
			return (0);
		x--;
	}
	return (1);
}

int	num(char **av)
{
	int	i;
	int	store;

	i = 0;
	store = 0;
	if (av[1][0] != '-')
	{
		while (av[1][i])
		{
			if (!(av[1][i] >= '0' && av[1][i] <= '9'))
				break ;
			store = store * 10 +(av[1][i] - 48) % 10;
			i++;
		}
		if (av[1][i] != '\0')
		{
			write (1, "0\n", 2);
			return (0);
		}
	}
	else
		return (0);
	return (store);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else if (n < 10)
	{
		ft_putchar(n + '0');
	}
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	i;
	int	store;

	store = 0;
	if (ac == 2 && ft_str_is_numeric(av[1]))
	{
		i = num(av);
		while (i > 1)
		{
			if (ft_is_prime(i))
				store += i;
			i--;
		}
	}
	ft_putnbr(store);
	ft_putchar('\n');
}
