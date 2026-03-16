//** RETURN VALUES : The isalpha() function returns zero if the character 
//tests false and returns non-zero if the character tests true
//if ((c >= 'A' && c  <= 'Z') || ('a' <= c && c <= 'z')){
//	return c;
//}
//return 0;
//Behave as boolean value wheater 0 or 1

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || ('a' <= c && c <= 'z'));
}
