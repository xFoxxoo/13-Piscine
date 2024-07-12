#include <unistd.h>

int	strilen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	rev_putstr(char *c)
{
	int	i;

	i = strilen(c);
	while (i >= 0)
	{
		write (1, &c[i], 1);
		i--;
	}
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	rev_putstr(av[1]);
	write (1, "\n", 1);
}
