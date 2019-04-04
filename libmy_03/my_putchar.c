/*
** my_putchar.c for  in /home/ryod1/piscine/week2_c1/libmy/selatn_r/fonctions
** 
** Made by SELATNI Ryad
** Login   <selatn_r@etna-alternance.net>
** 
** Started on  Fri Oct 28 22:05:41 2016 SELATNI Ryad
** Last update Fri Oct 28 22:06:41 2016 SELATNI Ryad
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
