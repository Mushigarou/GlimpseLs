// locate byte in byte string, even NULL_CHAR
// Memchr segfault in case (NULL, '\0', 1)

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	cast_c;
	unsigned char	*cast_s;
	size_t			i;

	if (n != 0)
	{
		cast_c = (unsigned char)c;
		cast_s = (unsigned char *)s;
		i = -1;
		while (++i < n)
		{
			if (cast_c == cast_s[i])
				return ((void *)(s) + i);
		}
	}
	return (NULL);
}
