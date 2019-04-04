/*
** my_strlen.c for  in /home/ryod1/piscine/week2_c1/jour3/selatn_r/my_strlen
** 
** Made by SELATNI Ryad
** Login   <selatn_r@etna-alternance.net>
** 
** Started on  Fri Oct 28 22:32:58 2016 SELATNI Ryad
** Last update Fri Oct 28 22:34:03 2016 SELATNI Ryad
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
