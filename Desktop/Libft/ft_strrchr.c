/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:53:57 by qdo               #+#    #+#             */
/*   Updated: 2024/03/09 12:25:23 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_str_len(char *str)
// {
// 	size_t	len;

// 	len = 0;
// 	while (len)
// 	{
// 		len++;
// 		str++;
// 	}
// 	return (len);
// }

char	*ft_strrchr(const char *s, int c)
{
	char	*a;

	a = NULL;
	if ((char)c == '\0')
	{
		while (*s != '\0')
			s++;
		if (*s == (char)c)
			return ((char *)s);
	}
	while (*s != '\0')
	{
		if (*s == (char)c)
			a = (char *)s;
		s++;
	}
	return (a);
}
// int main(void)
// {
// 	char    *a = "";
// 	printf("%s\n", a);
// 	printf("%s\n", ft_strrchr(a, 'a'));
// 	return (0);
// }