#include <stdlib.h>
#include <stdio.h>

int	ft_fibonacci(int nb);

int	main(int argc, char **argv)
{
	int	nb;
	(void)argc;
	nb = atoi(argv[1]);
	printf("%d", ft_fibonacci(nb));
	return (0);
}
