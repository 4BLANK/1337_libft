/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasdouq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:16:25 by amasdouq          #+#    #+#             */
/*   Updated: 2023/11/21 06:34:40 by amasdouq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*p;
	size_t	total;

	total = nelem * elsize;
	if (nelem && ((total / nelem) != elsize))
		return (NULL);
	p = (void *)malloc(total);
	if (!p)
		return (NULL);
	ft_bzero(p, total);
	return (p);
}
