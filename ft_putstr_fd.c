/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasdouq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:19:45 by amasdouq          #+#    #+#             */
/*   Updated: 2023/11/07 21:20:53 by amasdouq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_putstr_fd(char *s, int fd)
{
  while (*s)
  {
    ft_putchar_fd(*s, fd);
    s++;
  }
}