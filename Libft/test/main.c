#include <stdio.h>
#include <string.h>

int		main(void)
{
	char *ptr;
	char s1[] = "Hello, World";
	char s2[] = "Wor";
	ptr = NULL;

	ptr = strnstr(ptr, s2, 10);
	printf("%s", ptr);
	ptr = NULL;
	return (0);
}
