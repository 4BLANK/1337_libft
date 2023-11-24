/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasdouq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:16:25 by amasdouq          #+#    #+#             */
/*   Updated: 2023/11/24 01:48:18 by amasdouq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	char	*p;
	size_t	total;

	if (nelem > 0 && elsize > 0)
	{
		total = nelem * elsize;
		if (nelem && ((total / nelem) != elsize))
			return (NULL);
		p = (void *)malloc(total);
		if (!p)
			return (NULL);
		ft_bzero(p, total);
	}
	else if (nelem == 0 || elsize == 0)
	{
		p = malloc(1);
		p[0] = 0;
		return ((void *)p);
	}
	return ((void *)p);
}
