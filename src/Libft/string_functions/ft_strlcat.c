//concatenate two strings
// the initial length of dst plus the length of src
// the return value is >= dstsize, the output string has been truncated.
//  It is the caller's responsibility to handle this.
// If NULL is sent whether in dst or src, strlcat segfault
// if dstsize = -1, original doesn't produce any executable

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	len_src = ft_strlen(src);
	if ((dstsize == 0 && dst == NULL) || dstsize == 0)
		return (len_src);
	len_dst = ft_strlen(dst);
	if (dstsize < len_dst)
		return (dstsize + len_src);
	i = len_dst;
	while (*src && i++ < dstsize - 1)
		*(dst++ + len_dst) = *src++;
	*(dst + len_dst) = '\0';
	return (len_dst + len_src);
}
