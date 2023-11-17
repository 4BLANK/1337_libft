/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasdouq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:54:14 by amasdouq          #+#    #+#             */
/*   Updated: 2023/11/12 12:32:03 by amasdouq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list *ft_lstnew(void *content)
{
  t_list *node;

  node = malloc(sizeof(t_list));
  if (!node)
    return (NULL);
  node->content = content;
  node->next = NULL;
  return node;
}
