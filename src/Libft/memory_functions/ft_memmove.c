//copy len bytes string, the two strings may overlap
//The two strings may overlap

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	// size_t	tmp;

	// tmp = len;
	if (dst > src)
		while (len-- > 0)
			((char *)dst)[len] = ((char *)src)[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
