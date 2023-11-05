/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasdouq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:57:36 by amasdouq          #+#    #+#             */
/*   Updated: 2023/11/05 04:05:35 by amasdouq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	init;

	init = s[0];
	while (*s)
		s++;
	while (*s != init)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	return (0);
}
