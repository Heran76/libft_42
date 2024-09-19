
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	if (c == 0)
		return (ptr);
	return (NULL);
}

/*int	main()
{
	char	str[] = "Eu vou encontrar um ponto . Ca esta ele!";
	char	c = '.';
	ft_putendl_fd(ft_strchr(str, c), 1);
}*/
