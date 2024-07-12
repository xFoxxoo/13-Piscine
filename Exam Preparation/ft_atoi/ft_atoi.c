int	ft_atoi(const char *str)
{
	int	i;
	int	x;
	int	result;

	i = 0;
	x = 1;
	result = 0;

	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
	{
		i++;
	}
	if (str[i] == '-')
		x *= -1;
	i++;
	while (str[i])
	{
		result *= 10;
		if (str[i] >= '0' && str[i] <= '9')
			result += str[i] - '0';
		i++;
	}
	return (result * x);
}

#include <stdio.h>

int	main()
{
	int	x =ft_atoi("-897");
	printf("%d",x); 
}
