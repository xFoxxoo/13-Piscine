#include <unistd.h>

void	ulputstr(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
		else if (c[i] >= 'A' && c[i] <= 'Z')
			c[i] += 32;
		write (1, &c[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ulputstr(av[1]);
	}
	write (1, "\n", 1);
	return (0);
}
