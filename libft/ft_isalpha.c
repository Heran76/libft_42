
#include "libft.h"

static int	ft_mai(int c)
{
	return ('A' <= c && c <= 'Z');
}

static int	ft_min(int c)
{
	return ('a' <= c && c <= 'z');
}

int	ft_isalpha(int c)
{
	return (ft_mai(c) || ft_min(c));
}

/*int	main()
{
	ft_putnbr_fd(ft_isalpha('a'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalpha('U'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalpha('5'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalpha('\t'), 1);
	ft_putchar_fd('\n', 1);
}*/
