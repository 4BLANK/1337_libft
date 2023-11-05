/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasdouq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 03:14:32 by amasdouq          #+#    #+#             */
/*   Updated: 2023/11/05 03:35:21 by amasdouq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	len;

	len = ft_strlen(s);
	p = (char *)ft_calloc(len + 1, sizeof(char));
	if (!p)
		return (NULL);
	while (len)
	{
		*p = *s;
		s++;
		p++;
		len--;
	}
	return (p);
}
