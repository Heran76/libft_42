
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;

	if (*little == 0)
		return ((char *)big);
	n = ft_strlen(little);
	if (len == 0)
		return (0);
	while (*big && n <= len)
	{
		if (*big == *little && ft_strncmp(big, little, n) == 0)
			return ((char *)big);
		++big;
		--len;
	}
	return (NULL);
}

/*int	main()
{
	char	str[] = "Indo eu, indo eu";
	char	str1[] = "indo";
	ft_putendl_fd(ft_strnstr(str, str1, ft_strlen(str)), 1);
}*/
