// write zeroes to a byte string
// bzero does nothing when n = 0. 
// it segfault when NULL represents its first parameter
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n-- > 0)
		*(char *)s++ = 0;
}
