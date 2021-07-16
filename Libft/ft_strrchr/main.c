#include <stdio.h>

char	*ft_strrchr(const char *str, int c);

int			main(void)
{
	char c;
	char str[] = "Hello, World";
	char *ptr;

	c = 'l';
	ptr = ft_strrchr(str, c);
	printf("%c", *ptr);
	return (0);
}
