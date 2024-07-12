#include <unistd.h>

void print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	else
	{
		print(av[1]);
		print("\n");
	}
	return (0);
}
