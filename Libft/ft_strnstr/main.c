#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t c);

int			main(void)
{
	int c;
	char *ptr;
	char s1[] = "Hello, World";
	char s2[] = "Wor";
	
	c = 10;
	ptr = ft_strnstr(s1, s2, c);
	printf("%s", ptr);
	return (0);
}
