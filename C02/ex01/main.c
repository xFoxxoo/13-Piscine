/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilal <abilal@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:59:52 by abilal            #+#    #+#             */
/*   Updated: 2024/07/02 13:57:39 by abilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0'  && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	
	while ( i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}


int	main()
{
	char dest[100] ;
	char src[] = "hELLOfffdg";
	unsigned int n = 8;
	printf("%s", ft_strncpy(dest, src,n));
}
