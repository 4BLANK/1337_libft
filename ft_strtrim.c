/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasdouq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:30:45 by amasdouq          #+#    #+#             */
/*   Updated: 2023/11/06 02:10:40 by amasdouq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char  *ft_strtrim(char const *s1, char const *set)
{
  char  *p;
  size_t start;
  size_t end;

  p = NULL;
  start = 0;
  end = ft_strlen(s1) - 1;
  while (s1[start] && ft_strchr(set, s1[start]))
    start++;
  //printf("%ld\n", end);
  while (end > start && ft_strchr(set, s1[end]))
      end--;
  p = ft_substr(s1, start, end - start + 1);
  return (p);
}
