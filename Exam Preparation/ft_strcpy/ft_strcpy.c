#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main()
{
	char dest[]="smt";
	char src[]="Copy this";
	printf("%s", ft_strcpy(dest, src));
}
