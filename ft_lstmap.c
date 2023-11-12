/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasdouq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:53:22 by amasdouq          #+#    #+#             */
/*   Updated: 2023/11/11 21:16:11 by amasdouq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
 	t_list	*new;
	t_list	*p;

	new = NULL;
	while (lst)
	{
		p = ft_lstnew(f(lst->content));
		if (!p)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, p);
		lst = lst->next;
	}
	return (new);
}
