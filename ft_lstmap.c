/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterkhoy <mterkhoy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 13:46:29 by mterkhoy          #+#    #+#             */
/*   Updated: 2020/10/10 08:57:10 by mterkhoy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list *nlist;

	nlist = 0;
	while (lst)
	{
		ft_lstadd_back(&nlist, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (nlist);
}
