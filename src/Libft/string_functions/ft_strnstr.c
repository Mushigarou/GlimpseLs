//locate a substring in a string
#include "libft.h"

char	*ft_strnstr(const char *hs, const char *nl, size_t n)
{
	size_t	i;

	if (*nl == '\0')
		return ((char *)hs);
	if (n <= 0 || *hs == '\0')
		return (NULL);
	while (n > 0 && *hs != '\0')
	{
		i = 0;
		while (hs[i] == nl[i] && n > 0 && hs[i] != '\0')
		{
			if (nl[i + 1] == '\0')
				return ((char *)hs);
			i++;
			n--;
		}
		n += i;
		hs++;
		n--;
	}
	return (NULL);
}
