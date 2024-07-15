/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilal <abilal@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 08:21:36 by abilal            #+#    #+#             */
/*   Updated: 2024/07/15 13:40:51 by abilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_allocate(int size, char **strs, char *sep)
{
	int		i;
	int		slen;
	char	*res;

	i = 0;
	slen = ft_strlen(sep) * (size - 1);
	if (size == 0)
	{
		res = malloc(1);
		*res = 0;
		return (res);
	}
	while (i < size)
		slen += ft_strlen(strs[i++]);
	res = malloc(slen + 1);
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		j;
	int		k;
	char	*str;
	int		i;

	str = ft_allocate(size, strs, sep);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			str[k++] = sep[j++];
		i++;
	}
	str[k] = 0;
	return (str);
}
