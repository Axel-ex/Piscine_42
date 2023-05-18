#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int	main(void)
{
	char	*tab[5] = {"salut", "ca", "va", "les", "gars"};
	s_stock_str	*res;
	
	res = ft_strs_to_tab(5, tab);

	int i = 0;
	while (i < 5)
	{
		printf("size: %d\n str: %s\n cpy: %s\n", res[i].size, res[i].str, res[i].copy);
		i++;
	}
	return (0);
}
