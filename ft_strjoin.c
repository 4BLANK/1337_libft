/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasdouq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:04:35 by amasdouq          #+#    #+#             */
/*   Updated: 2023/11/10 23:03:47 by amasdouq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	p = (char *)ft_calloc(len1 + len2 + 1, sizeof(char));
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, len1 + 1);
	ft_strlcat(p, s2, len1 + len2 + 1);
	return (p);
}
