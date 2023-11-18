/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasdouq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 20:40:03 by amasdouq          #+#    #+#             */
/*   Updated: 2023/11/18 21:01:53 by amasdouq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	p = NULL;
	if (!del)
		return ;
	while (*lst)
	{
		p = (*lst)->next;
		ft_lstdelone(*lst, *del);
		*lst = p;
	}
}
