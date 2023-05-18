#include <stdlib.h>
#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(int argc, char **argv)
{
	int	nb;
	(void)argc;
	nb = atoi(argv[1]);
	printf("%d", ft_find_next_prime(nb));
	return (0);
}
