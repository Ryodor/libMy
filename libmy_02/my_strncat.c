/*
** my_strncat.c for  in /home/ryod1/piscine/week2_c1/jour4/selatn_r/my_strncat
** 
** Made by SELATNI Ryad
** Login   <selatn_r@etna-alternance.net>
** 
** Started on  Fri Oct 28 04:18:59 2016 SELATNI Ryad
** Last update Fri Oct 28 04:24:24 2016 SELATNI Ryad
*/

char	*my_strncat(char *dest, char *src, int n)
{
  int   i;
  int   e;

  i = 0;
  e = 0;
  while (dest[i] != '\0')
    i++;
  while (src[e] != '\0' && e < n)
    {
      dest[i] = src[e];
      i++;
      e++;
    }
  dest[i] = '\0';
  return (dest);
}
