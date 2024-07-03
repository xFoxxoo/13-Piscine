/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abilal <abilal@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:01:58 by abilal            #+#    #+#             */
/*   Updated: 2024/07/01 21:41:17 by abilal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while ( str[i] != '\0')
	{
		if ( !((str[i] >= 'a' && str[i] <= 'z') ||  (str[i] >= 'A' && str[i] <= 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main()
{

	char str[] = "sd ";
	char str2[] = "dsffdfg5";
	printf("%d\n",ft_str_is_alpha(str));
	printf("%d",ft_str_is_alpha(str2));
}
