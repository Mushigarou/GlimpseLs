/*Applies the function f to each character of the
string s, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of f.*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	s_len;
	char			*p;

	if (!s || !f)
		return (NULL);
	s_len = 0;
	s_len = ft_strlen(s);
	p = (char *)malloc((s_len + NULL_CHAR) * sizeof(char));
	if (p == NULL)
		return (NULL);
	p[s_len] = '\0';
	s_len = 0;
	while (s[s_len])
	{
		p[s_len] = f(s_len, s[s_len]);
		s_len++;
	}
	return (p);
}
