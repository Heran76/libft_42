
#include "libft.h"

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}
int main()
{
	ft_putnbr_fd(ft_isdigit('5'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isdigit('4'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isdigit('a'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isdigit('\t'), 1);
	ft_putchar_fd('\n', 1);
}