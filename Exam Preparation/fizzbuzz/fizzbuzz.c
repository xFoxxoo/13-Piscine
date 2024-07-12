#include <unistd.h>

void	print(char c)
{
	write (1, &c, 1);
}

void	putnbr(int	nb)
{
	if (nb > 9)
	{
		putnbr(nb / 10);
		putnbr(nb % 10);
	}
	else
		print(nb + '0');
}

int	main(void)
{
	int	i;

	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
			write (1, "fizz", 5);
		if (i % 5 == 0)
			write (1, "buzz", 5);
		else if (i % 5 != 0 && i % 3 != 0)
			putnbr(i);
		write(1, "\n", 1);
		i++;
	}
}
