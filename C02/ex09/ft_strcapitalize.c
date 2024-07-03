/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilal <abilal@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 20:17:57 by abilal            #+#    #+#             */
/*   Updated: 2024/07/03 10:12:22 by abilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *stra)
{
	int	i;

	i = 0;
	while (stra[i])
	{
		if (stra[i] >= 'A' && stra[i] <= 'Z')
		{
			stra[i] = stra[i] + 32;
		}
		i++;
	}
	return (stra);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_strlowcase(str);
	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}
	while (str[i])
	{
		if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z') || (
					str[i - 1] >= '0' && str[i - 1] <= '9') || (
					str[i - 1] >= 'A' && str[i - 1] <= 'Z')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
