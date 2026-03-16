#include "libft.h"
#define TRUE 1;
#define FALSE 0;

/*Counting number of digits*/

static	int	count_n(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

//Allocates Memory for the string

static char	*alloc(char *p, int n)
{
	p = (char *)malloc((n + NULL_CHAR) * sizeof(char));
	if (p == NULL)
		return (NULL);
	p[n] = '\0';
	return (p);
}

/*Reverse the string*/

static char	*ft_rev(char *str, int sign)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = ft_strlen(str) - NULL_CHAR;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	if (sign)
		str[0] = '-';
	return (str);
}

/*INTEGER to ASCII*/

static char	*int_to_ascii(char *str, int *num_dig, int *n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (str[i] = '0', str);
	while (i < *num_dig)
	{
		str[i++] = *n % 10 + '0';
		*n /= 10;
	}
	return (str);
}
/*
* Step 1 : Checking Integer Overflow (Not Applied)
* Step 2 : Counting number of digits in n
* Step 3 : Allocating n bytes equal to the nbr of digits in (n)
* Step 4 : Converting int to char (Modulo : write least significant digit, 
*			then fraction to remove last digit)
* Step 5 : Reversing the output, then returning the string
*/

char	*ft_itoa(int n)
{
	int		num_dig;
	int		sign;
	char	*str;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	sign = FALSE;
	str = NULL;
	num_dig = count_n(n);
	str = alloc(str, num_dig);
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		sign = TRUE;
		n *= -1;
	}
	str = int_to_ascii(str, &num_dig, &n);
	return (ft_rev(str, sign), str);
}
