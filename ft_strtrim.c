/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 22:40:05 by mterkhoy          #+#    #+#             */
/*   Updated: 2020/10/05 00:05:21 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char c, char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set ++;
	}
	return (0);
}

static int	ft_getlen(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (ft_isinset(s1[i], set))
		i++;
	j = ft_strlen(s1) - 1;
	while (j > 0 && ft_isinset(s1[j], set))
		j--;
	return (j - i + 1);
}

char 		*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		i;
	char	*str;

	if ((len = ft_getlen(s1, set)) <= 0)
		len = 0;
	if (!(str = malloc((len + 1) * sizeof(char))))
		return (0);
	while (ft_isinset(*s1, set))
		s1++;
	i = 0;
	while (len-- > 0)
		str[i] = s1[i++];
	str[i] = '\0';
	return (str);
}
