#include <stdlib.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(int argc, char **argv)
{
	int	nb;
	(void)argc;
	nb = atoi(argv[1]);
	printf("%d", ft_recursive_factorial(nb));
	return (0);
}
