/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilal <abilal@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:52:32 by abilal            #+#    #+#             */
/*   Updated: 2024/07/02 13:03:03 by abilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	dest[i]='\0';
	return (dest);
}

int	main()
{
	char dest[1];
	char src[] = "hELLO";
	printf("%s", ft_strcpy(dest, src));
}
