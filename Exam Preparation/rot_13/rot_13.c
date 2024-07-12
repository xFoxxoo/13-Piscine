#include <unistd.h>

void	trputstr(char *c)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (c[i])
	{
		if ((c[i] >= 'a' && c[i] <= 'm') || (c[i] >= 'A' && c[i] <= 'Z'))
			c[i] += 13;
		else if ((c[i] >= 'n' && c[i] <= 'z') || (c[i] >= 'N' && c[i] <= 'z'))
			c[i] -= 13;
		write (1, &c[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	trputstr(av[1]);
}
