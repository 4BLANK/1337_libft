/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasdouq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:35:01 by amasdouq          #+#    #+#             */
/*   Updated: 2023/11/09 16:42:45 by amasdouq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  size_t i;

  i = 0;
  while (((unsigned char *)s1)[i] && i < n)
  {
    if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
      return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
    i++;
  }
  return (0);
}
