/*
** my_strstr.c for  in /home/ryod1/piscine/week2_c1/jour4/selatn_r/my_strstr
** 
** Made by SELATNI Ryad
** Login   <selatn_r@etna-alternance.net>
** 
** Started on  Fri Oct 28 08:14:42 2016 SELATNI Ryad
** Last update Fri Oct 28 23:52:02 2016 SELATNI Ryad
*/

int	compare(char *str, char *to_find, int i)
{
  int	y;

  y = 0;
  while (to_find[y] != '\0')
    {
      if (str[i] != to_find[y] || str[i] == '\0')
	return (0);
      i++;
      y++;
    }
  return (1);
}

char	*my_strstr(char *str, char *to_find)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == to_find[0])
	{
	  if (compare(str, to_find, i) == 1)
	    return (str + i);
	}
      i++;
    }
  return (0);
}
