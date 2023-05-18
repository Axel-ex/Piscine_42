#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb);

int	main(int argc, char **argv)
{
	int	nb;
	(void)argc;

	nb = atoi(argv[1]);
	printf("%d", ft_is_prime(nb));
	return (0);
}
