/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilal <abilal@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:59:09 by abilal            #+#    #+#             */
/*   Updated: 2024/07/10 16:09:33 by abilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write (1, "a\nm",3);
		return (0);
	}
	int	i;

	i = 0;

	while (av[1][i])
	{
		if (av[1][i] == 97)
		{
			write(1, "a\nk", 3);
			return (0);
		}
		i++;
	}
	write (1, "\n", 1);
	return (0);
}