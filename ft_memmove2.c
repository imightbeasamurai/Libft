#include <stdio.h>

void *ft_mememove2(void *dst, const void *src, size_t n)
{
    size_t i;
    char *s;
    char *d;

    i = 0;
    d = (char*)dst;
    s = (char*)src;
    if (!dst && !src)
        return NULL;
    if (s < d)
		while (n--)
			*(d + n) = *(s + n);
	else
	{
		while (i < n)
		{
			*(d + i) = *(s + i);
			i++;
		}
	}
	return (dst);
}

int main()
{
    char str1[]="eno elpmas";

    ft_mememove2(str1, str1 + 2, 3);

    printf("%s", str1);
}