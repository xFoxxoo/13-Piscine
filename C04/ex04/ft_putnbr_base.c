/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilal <abilal@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:36:10 by abilal            #+#    #+#             */
/*   Updated: 2024/07/09 18:57:46 by abilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	print(char c)
{
	write (1, &c, 1);
}

int	checkbase(char *base)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_strlen(base);
	if (base[0] == '\0' || len == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == 43 || base[i] == 45 || base[i] == 127 || base[i] <= ' ')
			return (0);
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nb, char *base)
{
	int		baselen;
	long	num;

	num = nb;
	baselen = ft_strlen(base);
	if (checkbase(base) == 1)
	{
		if (num < 0)
		{
			print('-');
			num = num -1;
		}
		if (num < baselen)
		{
			print(base[num]);
		}
		if (num >= baselen)
		{
			ft_putnbr_base(num / baselen, base);
			ft_putnbr_base(num % baselen, base);
		}
	}
}
