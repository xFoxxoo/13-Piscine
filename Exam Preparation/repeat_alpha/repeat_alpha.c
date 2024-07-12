#include <unistd.h>

int	charcount(char *c)
{
	int	i;
	if ( !((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z')))
		return (1);
	else
		return (c[i] - 'a' + 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	rep;

	i = 0;
	rep = 0;
	if (ac != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (av[1][i])
	{
		while (charcount(&av[1][i]) > rep)
		{
			write (1, &av[1][i], 1);
			rep++;
		}
		i++;
		rep = 0;
	}
	write (1, "\n", 1);
}
