/*
** my_str_to_wordtab.c for  in /home/ryod1/piscine/week3/jour1/selatn_r/my_str_to_wordtab
** 
** Made by SELATNI Ryad
** Login   <selatn_r@etna-alternance.net>
** 
** Started on  Mon Oct  3 11:16:49 2016 SELATNI Ryad
** Last update Sun Oct  9 14:51:28 2016 SELATNI Ryad
*/

#include <stdlib.h>

int     alpn_or_not(char *str, int i);
int     countword(char *str);
int     lenword(char *str, int i);

int	alpn_or_not(char *str, int i)
{
  if ((str[i] >= 'a' && str[i] <= 'z') ||
      (str[i] >= 'A' && str[i] <= 'Z') ||
      (str[i] >= '0' && str[i] <= '9'))
    return (1);
  else if ((str[i] < 'a' || str[i] > 'z') &&
	   (str[i] < 'A' || str[i] > 'Z') &&
	   (str[i] < '0' || str[i] > '9') &&
	   str[i] != '\0')
    return (0);
  else if (str[i] == '\0')
    return (-1);
  return (-2);
}

int	countword(char *str)
{
  int	i;
  int	y;
  int	e;
  int	a;

  a = 0;
  i = 0;
  y = 0;
  e = 0;
  while (str[i] != '\0')
    {
      e = y;
      y = alpn_or_not(str, i);
      if (e != y && y == 1)
	a++;
      i++;
    }
  return (a);
}

int	lenword(char *str, int i)
{
  int	e;

  e = 0;
  while (alpn_or_not(str, i) == 1)
    {
      i++;
      e++;
    }
  return (e);
}

char	**my_str_to_wordtab(char *str)
{
  int	i;
  int	e;
  int	y;
  char	**tab;

  i = 0;
  e = 0;
  y = 0;
  tab = malloc((countword(str) + 1) * sizeof(char*));
  while (str[i] != '\0')
    {
      while (alpn_or_not(str, i) != 1 && str[i] != '\0')
	i++;
      tab[e] = malloc((lenword(str, i) + 1) * sizeof(char));
      while (alpn_or_not(str, i) == 1)
	{
	  tab[e][y] = str[i];
	  y++;
	  i++;
	}
      tab[e][y] = '\0';
      y = 0;
      e++;
    }
  tab[e] = NULL;
  return (tab);
}
