// locate a character in the given string
// Segfault when s == NULL 

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)(s));
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
