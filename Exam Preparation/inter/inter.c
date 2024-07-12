/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilal <abilal@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:49:57 by abilal            #+#    #+#             */
/*   Updated: 2024/07/11 17:55:06 by abilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	wachkayn(char *str, char c)
{
	int	i;

	i = 0;

	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	inter(char *src, char *word, char *comp)
{
	int	i;
	int	x;
	int	z;

	i = 0;
	x = 0;
	while (src[i])
	{
		if (wachkayn(word, src[i]) == 1)
		{
			if (wachkayn(comp, src[i]) == 0)
			{
				write (1, &src[i], 1);
				comp[x] = src[i];
			}
			x++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	char	x[100];

	if (ac == 3)
	{
		inter(av[1], av[2], x);
	}
	write (1, "\n", 1);
}

