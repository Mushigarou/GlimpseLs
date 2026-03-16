//Printable characters starts from 32 TO 126
#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
