/*
** my_strcmp.c for  in /home/ryod1/piscine/week2_c1/jour4/selatn_r/my_strcmp
** 
** Made by SELATNI Ryad
** Login   <selatn_r@etna-alternance.net>
** 
** Started on  Fri Oct 28 02:42:01 2016 SELATNI Ryad
** Last update Fri Oct 28 22:54:06 2016 SELATNI Ryad
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

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
  while (s1[i] != '\0' || s2[i] != '\0')
    {
      if (s1[i] > s2[i])
	return (1);
      if (s2[i] > s1[i])
	return (-1);
      i++;
    }
  return (0);
}
