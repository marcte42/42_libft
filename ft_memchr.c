/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 10:44:51 by mterkhoy          #+#    #+#             */
/*   Updated: 2020/10/04 12:05:51 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	size_t	len;
	char	*ptr;

	ptr = (char *)s;
	len = ft_strlen(ptr);
	if (!c)
		return ((char *)&ptr[len]);
	i = -1;
	while (++i < n)
		if (ptr[i] == c)
			return ((char *)&ptr[i]);
	return (0);
}
