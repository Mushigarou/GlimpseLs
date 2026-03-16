// copy n bytes from memory area
// If dst and src overlap, behavior is undefined
// segfault only when one of the parameter is NULL, and passed with n > 0
// If both arguments have the same address in memory returns (dst)

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	if (dst == src)
		return (dst);
	i = -1;
	while (++i < n)
		d[i] = s[i];
	return ((void *)(dst));
}
