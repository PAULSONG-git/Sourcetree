/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paul <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 14:55:39 by paul              #+#    #+#             */
/*   Updated: 2021/07/16 15:27:50 by paul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int i;
	char *ptr;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		if (str[i] == c)
			ptr = (char *)&str[i];
		i++;
	}
	if (ptr)
		return (ptr);
	if (str[i] == '\0')
		return ((char *)&str[i]);
	return (NULL);
}
