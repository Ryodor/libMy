/*
** my_getnbr.c for  in /home/ryod1/piscine/week2_c1/jour5/selatn_r/my_getnbr
** 
** Made by SELATNI Ryad
** Login   <selatn_r@etna-alternance.net>
** 
** Started on  Fri Oct 28 12:48:28 2016 SELATNI Ryad
** Last update Fri Oct 28 20:54:39 2016 SELATNI Ryad
*/

int	my_getnbr(char *str)
{
  int   i;
  int   res;
  int	e;

  e = 1;
  i = 0;
  res = 0;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	e *= -1;
      i++;
    }
  if (str[i] < '0' || str[i] > '9' || str[0] == '\0')
    return (0);
  while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
      res = res * 10 + str[i] - '0';
      i++;
    }
  return (res * e);
}
