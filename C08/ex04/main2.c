#include <stdio.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int	main(void)
{
	char	*tab[5] = {"salut", "ca", "va", "les", "gars"};
	s_stock_str	*res;
	
	res = ft_strs_to_tab(5, tab);
	
	ft_show_tab(res);
	return (0);
}
