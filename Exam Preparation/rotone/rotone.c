#include <unistd.h>

void	oneputstr(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		if ((c[i] >= 'a' && c[i] <= 'y') || (c[i] >= 'A' && c[i] <= 'Y'))
			c[i] += 1;
		else if (c[i] == 'z' || c[i] == 'Z')
			c[i] = 'a';
		write (1, &c[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		oneputstr(av[1]);
	}
	write (1, "\n", 1);
	return (0);
}
