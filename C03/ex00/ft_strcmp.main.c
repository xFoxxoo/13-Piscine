/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilal <abilal@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:31:40 by abilal            #+#    #+#             */
/*   Updated: 2024/07/03 11:45:26 by abilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i]  && (s1[i] != '\0' || s1[i] != '\0') && i < n)
	{
		i++;
	}
	return (s1[i] - s2[i] );
}

int	main()
{
	char s1[]="zdsdsfdsfdsfdsfdsf";
	char s2[]="zdsfsfdsfdsfdsffsf";
	printf("%d",ft_strcmp(s1,s2,5) );
}
