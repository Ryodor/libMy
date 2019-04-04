/*
** my_put_nbr.c for  in /home/ryod1/piscine/week2_c1/jour5/selatn_r/my_put_nbr
** 
** Made by SELATNI Ryad
** Login   <selatn_r@etna-alternance.net>
** 
** Started on  Fri Oct 28 12:49:58 2016 SELATNI Ryad
** Last update Sat Oct 29 03:17:09 2016 SELATNI Ryad
*/

void	my_putchar(char c);

void    my_put_nbr(int n)
{
  int   div;
  unsigned int	nb;

  div = 1;
  if (n < 0)
    {
      my_putchar('-');
      n *= -1;
    }
  nb = n;
  while ((nb / div) >= 10)
    div *= 10;
  while (div >= 1)
    {
      my_putchar((nb / div) % 10 + 48);
      div /= 10;
    }
}
