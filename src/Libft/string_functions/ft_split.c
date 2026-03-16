#include "libft.h"

#define OUT 0
#define IN 1

/* Incrementing (wc) when (s - 1) is a seperator, and (*s) isn't a seperator */

static size_t	count_words(const char *s, char c)
{
	unsigned int	w_count;
	int				state;

	state = OUT;
	w_count = 0;
	while (*s != '\0')
	{
		if (*s == c)
			state = OUT;
		else if (*s != c && !state)
		{
			state = IN;
			w_count++;
		}
		s++;
	}
	return (w_count);
}

/* Free DRAM */

static void	free_tab(char	**tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}

/*Allocate memory for the string*/

static char	
	**alloc_new_str(const char *s, char **p, size_t row, size_t word_len)
{
	p[row] = (char *)malloc((word_len + NULL_CHAR) * sizeof(char));
	if (!p[row])
		return (free_tab(p), NULL);
	ft_strlcpy(p[row], (s - word_len), word_len + NULL_CHAR);
	return (p);
}

/* Splitting the string s */

static char	**split_str(const char *s, char **p, char c, size_t nbr_words)
{
	size_t	row;
	size_t	word_len;

	row = 0;
	while (s && (*s != '\0' && row < nbr_words))
	{
		while (s && *s == c && *s++)
			;
		if (s && *s != c && *s)
		{
			word_len = 0;
			while (s && *s != c && *s)
			{
				word_len++;
				s++;
			}
			if ((alloc_new_str(s, p, row, word_len)) == NULL)
				return (NULL);
			row++;
		}
	}
	return (p);
}

// Allocating for the future strings, then calling split_str function

char	**ft_split(char const *s, char c)
{
	char	**p;
	size_t	nbr_words;

	if (!s)
		return (NULL);
	nbr_words = count_words(s, c);
	p = (char **)malloc((nbr_words + NULL_CHAR) * (sizeof(char *)));
	if (p == NULL)
		return (NULL);
	p[nbr_words] = NULL;
	if (split_str(s, p, c, nbr_words) == NULL)
		return (NULL);
	return (p);
}
