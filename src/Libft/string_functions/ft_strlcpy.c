// Note that room for the NUL should be included in dstsize.
// strlcpy() copies up to dstsize - 1 characters from the string src to dst
// If the return value is >= dstsize, the output string has been truncated.
// ***It is the caller's responsibility to handle this
// Restrict : no other pointer will be used to access 
//***the object to which it points
// For strlcpy() that means the length of src.

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t	dstsize)
{	
	size_t	i;
	size_t	srclen;	

	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	i = 0;
	while ((*src != '\0') && (i++ < dstsize - 1))
		*dst++ = *src++;
	*dst = '\0';
	return (srclen);
}
