/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasdouq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:42:07 by amasdouq          #+#    #+#             */
/*   Updated: 2023/11/10 15:24:49 by amasdouq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
  char ch = c;
	while (*s != 0)
	{
		if (*s == ch)
			return ((char *)s);
		s++;
	}
  if(c == 0)
    return ((char *)s);
	return (0);
}
