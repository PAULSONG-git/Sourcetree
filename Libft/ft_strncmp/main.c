#include <stdio.h>

char	*ft_strncmp(const char *s1, const char *s2, size_t c);

int			main(void)
{
	int c;
	int result;
	char s1[] = "ABC";
	char s2[] = "AB";
	
	c = 10;
	result = ft_strncmp(s1, s2, c);
	printf("%d", result);
	return (0);
}
