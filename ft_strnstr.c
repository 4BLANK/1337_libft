/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasdouq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:07:05 by amasdouq          #+#    #+#             */
/*   Updated: 2023/11/05 14:53:26 by amasdouq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;

	i = 0;
	j = 0;
	p = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			j++;
		}
		if (little[j] == '\0')
		{
			p = (char *)&big[i];
			return (p);
		}
		i++;
	}
	return (p);
}
