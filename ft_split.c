/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasdouq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 01:34:08 by amasdouq          #+#    #+#             */
/*   Updated: 2023/11/06 15:46:41 by amasdouq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
static size_t word_count(char const *s, char c)
{
  size_t count;
  size_t i;

  count = 0;
  i = 0;
  if (s == 0)
    return (0);
  while (s[i] && s[i] == c)
    i++;
  while (s[i])
  {
    while (s[i] && s[i] != c)
      i++;
    if (s[i + 1] != c)
      count++;
    i++;
  }
  return (count);
}

char **allocate_to_str(char const s, char c)
{
  size_t buffer_size;
  size_t i;
  char **p;
  
  buffer_size = 0;
  p = NULL;
  i = 0;
  while (s[i])
  {
    buffer_size = 0;
    while (s[i] != c && s[i])
    {
      buffer_size++;
      i++;
    }
    i++;
  }
}

char  **ft_split(char const *s, char c)
{
  char **res;
  size_t buffer_size, res_size, i;

  res = NULL;
  buffer_size = 0;
  i = 0;
  res_size = word_count(s, c);
  res = (char **)ft_calloc(res_size + 1, sizeof(char *));
  while (s[i])
  {
    buffer_size = 0;
    while (s[i] != c && s[i])
    {
      buffer_size++;
      i++;
    }
    *res = (char *)ft_calloc(buffer_size + 1, sizeof(char));
    res++;
    i++;
  }
  return 0;
}

#include<stdio.h>
int main()
{
  char *str = 0;
  printf("%ld\n", word_count(str, ' '));
}
