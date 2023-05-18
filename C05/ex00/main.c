#include <stdlib.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(int argc, char **argv)
{
	int	nb;
	(void)argc;
	nb = atoi(argv[1]);
	printf("%d", ft_iterative_factorial(nb));
	return (0);
}
