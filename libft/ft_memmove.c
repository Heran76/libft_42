
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (!dest && !src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (n--)
		d[n] = s[n];
	return (dest);
}

/*int main()
{
	char	str[] = "Vou ser copiado.";
	char	dest[1];
	ft_putstr_fd(ft_memmove(dest, str, 10), 1);
	ft_putchar_fd('\n', 1);
}*/
