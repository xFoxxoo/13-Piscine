/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilal <abilal@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:46:46 by abilal            #+#    #+#             */
/*   Updated: 2024/07/17 11:41:35 by abilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *s)
{
	int		i;
	char	*alloc;
	int		len;

	i = 0;
	len = ft_strlen(s);
	if (len == 0)
		return (0);
	alloc = (char *)malloc(len + 1);
	if (alloc == 0)
		return (0);
	while (s[i])
	{
		alloc[i] = s[i];
		i++;
	}
	alloc[i] = 0;
	return (alloc);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*buff;
	int					i;

	buff = malloc(sizeof(struct s_stock_str) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		buff[i].size = ft_strlen(av[i]);
		buff[i].str = av[i];
		buff[i].copy = ft_strdup(av[i]);
		i++;
	}
	buff[i].copy = 0;
	buff[i].str = 0;
	return (buff);
}
/*
int	main(int ac, char **av)
{
	struct s_stock_str	*buff;
	int					i;

	i = 1;
	buff = ft_strs_to_tab(ac, av);
	printf("Copy = %s\n", buff[i].copy);
	printf("Size = %d\n", buff[i].size);
	printf("String = %s\n", buff[i].str);
}*/