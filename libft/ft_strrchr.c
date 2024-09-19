
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			ptr = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (ptr);
}

/*int	main()
{
	char	str[] = "Onde esta o W? Ca esta ele";
	char	c = 'W';
	ft_putendl_fd(ft_strchr(str, c), 1);
}*/
