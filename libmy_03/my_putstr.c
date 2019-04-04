/*
** my_putstr.c for  in /home/ryod1/piscine/week2_c1/jour3/selatn_r/my_putstr
** 
** Made by SELATNI Ryad
** Login   <selatn_r@etna-alternance.net>
** 
** Started on  Fri Oct 28 22:29:02 2016 SELATNI Ryad
** Last update Fri Oct 28 22:31:39 2016 SELATNI Ryad
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
