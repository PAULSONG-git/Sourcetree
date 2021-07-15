#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char 	c;
	int 	i;

	c = 'Z';
	i = ft_isalpha(c);

	printf("%d", i);
	return (0);
}
