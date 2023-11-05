/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasdouq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:16:25 by amasdouq          #+#    #+#             */
/*   Updated: 2023/11/05 03:43:49 by amasdouq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	unsigned char	*p;

	p = (unsigned char *)malloc(nelem * elsize);
	if (!p || !elsize || !nelem)
		return (NULL);
	ft_bzero(p, nelem * elsize);
	return (p);
}
