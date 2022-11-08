#include <libft.h>

char *ft_strdup(char *src)
{
	char *dup;
	int i;

	i = 0;
	if(!(dup = (char *)malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (NULL);
	while (*src)
		dup[i++] = *src++;
	dup[i] = '\0';
	return (dup);
}
