/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasdouq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:21:36 by amasdouq          #+#    #+#             */
/*   Updated: 2023/11/07 23:09:11 by amasdouq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_putendl_fd(char *s, int fd)
{
  ft_putstr_fd(s, fd);
  ft_putchar_fd('\n', fd);
}