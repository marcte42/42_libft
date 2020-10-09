/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 15:57:26 by mterkhoy          #+#    #+#             */
/*   Updated: 2020/10/09 16:40:35 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	l;
	size_t	i;
	char	*str;

	l = 0;
	while (s[start + l] && l < len)
		l++;
	if (!(str = malloc((l + 1) * sizeof(char))))
		return (0);
	i = 0;
	while (i < l)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
