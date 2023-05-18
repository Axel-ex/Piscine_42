#include <stdlib.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(int argc, char **argv)
{
	int	nb;
	int	power;

	(void)argc;
	nb = atoi(argv[1]);
	power = atoi(argv[2]);
	printf("%d", ft_recursive_power(nb, power));
	return (0);
}
