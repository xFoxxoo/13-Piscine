/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilal <abilal@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 11:41:18 by abilal            #+#    #+#             */
/*   Updated: 2024/07/06 14:09:03 by abilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hexa;
	char	temp;
	int		i;

	hexa = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (str[i] <= 31 || str[i] == 127)
		{
			ft_putchar('\\');
			temp = hexa[(unsigned char)str[i] / 16];
			ft_putchar(temp);
			temp = hexa[(unsigned char)str[i] % 16];
			ft_putchar(temp);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
