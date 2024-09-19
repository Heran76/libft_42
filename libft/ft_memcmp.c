
#include "libft.h"

int	ft_memcmp(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n && *d == *s)
	{
		++d;
		++s;
		--n;
	}
	if (n)
		return (*d - *s);
	else
		return (0);
}

/*int main()
{
	char	str[] = "Ola e adeus";
	char	str1[] = "Bom dia e boa noite";
	ft_putnbr_fd(ft_memcmp(str, str1, 5), 1);
}*/
