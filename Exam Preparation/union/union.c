/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilal <abilal@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 09:27:24 by abilal            #+#    #+#             */
/*   Updated: 2024/07/12 10:48:39 by abilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
int	kayn(char *str, char c)
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

void	uni(char *s1, char *s2, char *storage)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (kayn(s2, s1[i]) == 0)
		{
			if (kayn(storage, s1[i]) == 0)
			{
				storage[j] = s1[i];
				j++;
			}
			write (1, &s1[i], 1);
		}
		i++;
	}
}*/



int	main(int ac, char **av)
{
	char	storage[1024];

	if (ac == 3)
	{
		uni(av[1], av[2], storage);
	}
	write (1, "\n", 1);
}
