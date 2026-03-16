// compare byte string
// Both strings are assumed to be n bytes long
// zero if the two strings are identical, 
// Zero-length strings are always identical
/* returns the difference between the first two differing 
bytes (treated as unsigned char value*/
// Seg fault in case (NULL, NULL, 1), sending NULL with a size > 0

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cast_s1;
	unsigned char	*cast_s2;
	size_t			i;

	if (n != 0)
	{
		cast_s1 = (unsigned char *)s1;
		cast_s2 = (unsigned char *)s2;
		i = 0;
		while (i < n)
		{
			if (cast_s1[i] != cast_s2[i])
				return ((unsigned char)cast_s1[i] - (unsigned char)cast_s2[i]);
			i++;
		}
	}
	return (0);
}
