/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasdouq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:30:04 by amasdouq          #+#    #+#             */
/*   Updated: 2023/11/04 21:55:33 by amasdouq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
  size_t i;

  i = 0;
  while (i < n)
  {
    ((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
    i++;
  }
  return ((unsigned char*)dest);
}
