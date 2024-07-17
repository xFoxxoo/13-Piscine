#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

char	*ft_union(char *str1, char *str2)
{
	char result[256];
	int i;
	int j;
	int	k;

	k = 0;
	i = 0;
	while (str1[i])
	{
		j = 0;
		while (result[j] != str1[i])
		{
			if (result[j] == '\0')
			{
				result[k] = str1[i];
				k++;
				break ;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (str2[i])
	{
		j = 0;
		while (result[j] != str2[i])
		{
			if (result[j] == '\0')
			{
				result[k] = str2[i];
				k++;
				break ;
			}
			j++;
		}
		i++;
	}
	result[k] = 0;
	ft_putstr(result);
}

int	main(int ac, char **av)
{
	ft_union(av[1], av[2]);
	write (1, "\n", 1);
}