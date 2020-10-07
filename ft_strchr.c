/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 16:11:19 by mterkhoy          #+#    #+#             */
/*   Updated: 2020/10/04 12:18:50 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t i;
	size_t len;

	len = ft_strlen(s);
	if (!c)
		return ((char *)&s[len]);
	i = -1;
	while (s[++i])
		if (s[i] == c)
			return ((char *)&s[i]);
	return (0);
}
