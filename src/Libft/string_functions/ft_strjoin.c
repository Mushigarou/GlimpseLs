//Allocates (with malloc(3)) and returns a new string
//which is the result of the concatenation of s1 and s2
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len;
	size_t	i;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *)malloc(len + NULL_CHAR);
	if (new_str == NULL)
		return (new_str);
	len = 0;
	i = 0;
	while (s1[i])
		new_str[len++] = s1[i++];
	i = 0;
	while (s2[i])
		new_str[len++] = s2[i++];
	new_str[len] = '\0';
	return (new_str);
}
