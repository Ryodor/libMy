/*
** my_strdup.c for  in /home/ryod1/piscine/week3/jour1/selatn_r/my_strdup
** 
** Made by SELATNI Ryad
** Login   <selatn_r@etna-alternance.net>
** 
** Started on  Mon Oct  3 10:40:21 2016 SELATNI Ryad
** Last update Mon Oct  3 15:02:18 2016 SELATNI Ryad
*/

#include <stdlib.h>

int	my_strlen(char *str);

char	*my_strdup(char *str)
{
  char	*str2;
  int	i;

  i = 0;
  str2 = (char *)malloc((my_strlen(str) + 1) * sizeof(char));
  while (str[i] != '\0')
    {
      str2[i] = str[i];
      i++;
    }
  return (str2);
}
