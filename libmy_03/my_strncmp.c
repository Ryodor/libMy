/*
** my_strncmp.c for  in /home/ryod1/piscine/week2_c1/jour4/selatn_r/my_strncmp
** 
** Made by SELATNI Ryad
** Login   <selatn_r@etna-alternance.net>
** 
** Started on  Fri Oct 28 03:29:59 2016 SELATNI Ryad
** Last update Sat Oct 29 03:43:05 2016 SELATNI Ryad
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int   i;

  i = 0;
  if (s1[i] == '\0' || s2[i] == '\0')
    {
      if (s1[i] == '\0' && s2[i] == '\0')
	return (0);
      if (s1[i] > '\0')
	return (1);
      if (s2[i] > '\0')
	return (-1);
    }
  while ((s1[i] != '\0' || s2[i] != '\0') && i < n )
    {
      if (s1[i] > s2[i])
	return (1);
      if (s2[i] > s1[i])
	return (-1);
      i++;
    }
  if (s1[i] > s2[i] && i < n)
    return (1);
  if (s2[i] > s1[i] && i < n)
    return (-1);
  return (0);
}
