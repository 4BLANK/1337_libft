/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasdouq <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 01:34:08 by amasdouq          #+#    #+#             */
/*   Updated: 2023/11/06 02:06:45 by amasdouq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
char  **ft_split(char const *s, char c)
{
  char **res;
  size_t max_size;
  size_t buffer_size;

  buffer_size = 0;
  max_size = 0;
  res = NULL;
  while (*s)
  {
    buffer_size = 0;
    while (*s != c && *s)
    {
      buffer_size++;
      s++;
    }
    max_size += buffer_size;
    s++;
  }
  res = (char **)ft_calloc(max_size + 1, sizeof(char));
  if (!res)
    return (NULL);
  s -= max_size;
  while (*s)
  {
    *res = (char *)s;
    res++;
    s++;
  }
  *res = NULL;
  return (res);
}

#include<stdio.h>
int main() {
  char str[] = "This is a test string,split it.";
  char **result = ft_split(str, ' ');

  if (result) {
    for (int i = 0; result[i] != NULL; i++) {
      printf("%s\n", result[i]);
      free(result[i]); // Free memory for each substring
    }
    free(result); // Free the array of strings
  }
  return 0;
}
