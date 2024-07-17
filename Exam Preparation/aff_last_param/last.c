/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilal <abilal@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 21:24:27 by abilal            #+#    #+#             */
/*   Updated: 2024/07/16 21:36:04 by abilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
	i++;
	}
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putstr(av[ac - 1]);
	}
	write (1, "\n", 1);
}