#include <stdio.h>

char	*ft_strchr(const char *str, int c);

int			main(void)
{
	char c;
	char str[] = "Hello, World";
	char *ptr;

	c = 'H';
	ptr = NULL;
	ptr = ft_strchr(ptr, 'H');
	printf("%d", ptr == NULL);
	return (0);
}
