#include "libft.h"
#define DELETE 127
//If the character is in the range of 0 TO 127 the test is true, else false

int	ft_isascii(int c)
{
	return (c >= '\0' && c <= DELETE);
}
