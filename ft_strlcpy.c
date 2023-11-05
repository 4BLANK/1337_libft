/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasdouq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:43:01 by amasdouq          #+#    #+#             */
/*   Updated: 2023/11/05 04:09:01 by amasdouq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	index;
	size_t	l;

	src_len = ft_strlen(src) * sizeof(char);
	l = src_len;
	index = 0;
	while (src_len && size)
	{
		dest[index] = src[index];
		index++;
		src_len--;
		size--;
	}
	dest[index] = '\0';
	return (l);
}
