
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	c = (unsigned char)c;
	while (n && *ptr != c)
	{
		++ptr;
		--n;
	}
	if (n)
		return ((void *)ptr);
	else
		return (NULL);
}

/*int	main()
{
	char str[] = "Quando encontrares . segue!";
	char c = 'e';
	ft_putstr_fd(ft_memchr(str, c, ft_strlen(str)), 1);
	ft_putchar_fd('\n', 1);
}*/
