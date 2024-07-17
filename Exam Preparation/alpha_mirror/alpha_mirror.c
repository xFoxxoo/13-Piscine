#include <unistd.h>
void	alphcount(char c)
{
	if (c >= 'a' && c <= 'z') 
		c = 'm' - (c - 'n');
	else if (c >= 'A' && c <= 'Z')
		c = 'M' - (c - 'n');
	write (1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			alphcount(av[1][i]);
			i++;
		}
	}
	write (1, "\n", 1);
}




"test" "atssehsjkt"
union = taest
inter = 