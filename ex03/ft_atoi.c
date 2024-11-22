#include<unistd.h>
#include<stdio.h>

int	ft_atoi(char *str)
{
	int	pos = 0;
	int	intfound = 0;
	int	c = 1;
	int	sign = 1;

	while (*str != '\0')
	{
		if (str[pos] == '-')
		{
			sign *= -1;
			pos++;
		}
		if (str[pos] <= 32 || str[pos] == '+')
		{
			pos++;
		}
		if (str[pos] >= '0' && str[pos] <= '9')
		{
			intfound = 1;
			c = (c * 10) + str[pos] - '0';
			pos++;
		}
		if (intfound == 1 && !(str[pos] > '0' && str[pos] < '9'))
		{
			return (c*sign);
		}
	}
}

int	main()
{
	char *str = "+++--1288asud1124";
	printf ("%d", ft_atoi(str));
}
