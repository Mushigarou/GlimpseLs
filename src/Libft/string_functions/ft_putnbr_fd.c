// Outputs the integer n to the given file descriptor

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	// else if ((long long)n > INT_MIN)
	// {
	// 	write(fd, "-1", 1);
	// 	return ;
	// }
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}	
	if (ft_isdigit(n + '0'))
		ft_putchar_fd(n + 48, fd);
	if (n > 9)
	{	
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
