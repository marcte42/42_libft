/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 23:01:54 by marc              #+#    #+#             */
/*   Updated: 2020/10/04 12:19:01 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	if (!(dst = (char *)malloc((len + 1) * sizeof(dst))))
		return (0);
	i = -1;
	while (++i < len)
		dst[i] = s1[i];
	return (dst);
}
