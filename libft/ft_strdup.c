#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*str;
	char		*p;
	int			i;

	i = 0;
	while (s1[i])
		i++;
	str = (char *)malloc(i + 1);
	if (str == NULL)
		return (NULL);
	p = str;
	while (*s1)
		*p++ = *(unsigned char *)s1++;
	*p = '\0';
	return (str);
}

