/*
** my_strcpy.c for  in /home/ryod1/piscine/week2_c1/jour4/selatn_r/my_strcpy
** 
** Made by SELATNI Ryad
** Login   <selatn_r@etna-alternance.net>
** 
** Started on  Fri Oct 28 00:08:30 2016 SELATNI Ryad
** Last update Fri Oct 28 00:25:43 2016 SELATNI Ryad
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
