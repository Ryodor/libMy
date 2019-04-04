/*
** my_swap.c for  in /home/ryod1/piscine/week2_c1/jour3/selatn_r/my_swap
** 
** Made by SELATNI Ryad
** Login   <selatn_r@etna-alternance.net>
** 
** Started on  Fri Oct 28 22:25:14 2016 SELATNI Ryad
** Last update Sat Oct 29 03:07:45 2016 SELATNI Ryad
*/

void	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}
