#include <unistd.h>

void	putstr(char *str)
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
	int	last;

	last = ac - 1;
	if (ac < 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	if (ac >= 2)
	{
		putstr(av[last]);
	}
	return (0);
}
