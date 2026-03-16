/* memory allocation  The malloc() function allocates size bytes of memory
and returns a pointer to the allocated memory.*/
/*The calloc() : The allocated memory is filled with bytes of value zero. 
contiguously allocates enough space for count objects that are 
size bytes of memory each and returns a pointer to the allocated memory.
If space is insufficient, allocation fails and returns a NULL pointer */
// I can ask for the adress of a NULL adress by requesting a size of 0

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	// size_t	tmp;

	// tmp = size;
	ptr = malloc(count * size);
	if (ptr == 0)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}
