/* Allocates (with malloc(3)) and returns a copy of s1 
* with the characters specified in set removed
* from the beginning and the end of the string
*/
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	char	*beg;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	beg = (char *)s1;
	len = ft_strlen(s1);
	s1 += len - NULL_CHAR;
	while (len > 0 && ft_strrchr(set, *s1))
	{
		s1--;
		len--;
	}
	trimmed = (char *)malloc(len + NULL_CHAR);
	if (trimmed == NULL)
		return (trimmed);
	ft_memcpy(trimmed, beg, len);
	trimmed += len;
	*trimmed = '\0';
	return (trimmed - len);
}
