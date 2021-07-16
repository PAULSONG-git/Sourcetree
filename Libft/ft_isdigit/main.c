#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char 	c;
	int 	i;

	c = '1';
	i = ft_isdigit(c);

	printf("%d", i);
	return (0);
}
