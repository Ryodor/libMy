/*
** my_strcat.c for  in /home/ryod1/piscine/week2_c1/jour4/selatn_r/my_strcat
** 
** Made by SELATNI Ryad
** Login   <selatn_r@etna-alternance.net>
** 
** Started on  Fri Oct 28 03:42:53 2016 SELATNI Ryad
** Last update Fri Oct 28 03:56:44 2016 SELATNI Ryad
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	e;

  i = 0;
  e = 0;
  while (dest[i] != '\0')
    i++;
  while (src[e] != '\0')
    {
      dest[i] = src[e];
      i++;
      e++;
    }
  dest[i] = '\0';
  return (dest);
}
