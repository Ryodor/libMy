/*
** my_strncpy.c for  in /home/ryod1/piscine/week2_c1/jour4/selatn_r/my_strncpy
** 
** Made by SELATNI Ryad
** Login   <selatn_r@etna-alternance.net>
** 
** Started on  Fri Oct 28 00:34:28 2016 SELATNI Ryad
** Last update Sat Oct 29 02:52:31 2016 SELATNI Ryad
*/

int	my_strlen(char *str);

char	*my_strncpy(char *dest, char *src, int n)
{
  int   i;

  i = 0;
  if (my_strlen(src) < n)
    {
      while (i < n)
	{
	  if (i < my_strlen(src))
	    dest[i] = src[i];
	  else
	    dest[i] = '\0';
	  i++;
	}
      dest[i] = '\0';
    }
  if (my_strlen(src) >= n)
    {
      while (i < n)
	{
	  dest[i] = src[i];
	  i++;
	}
      if (my_strlen(src) == n)
	dest[i] = '\0';
    }
  return (dest);
}
