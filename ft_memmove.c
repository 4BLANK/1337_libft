/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasdouq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:12:53 by amasdouq          #+#    #+#             */
/*   Updated: 2023/11/10 19:13:44 by amasdouq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!n || (!dest && !src))
		return (dest);
	if (src > dest)
		dest = ft_memcpy(dest, src, n);
	if (dest >= src)
	{
		while (n--)
		{
			((char *)dest)[n] = ((char *)src)[n];
		}
	}
	return (dest);
}
