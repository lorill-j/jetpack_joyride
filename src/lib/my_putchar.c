/*
** my_putchar.c for my_putchar.c in /home/jimmy/lorill_j/src/lib
** 
** Made by LORILLARD Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Sat Mar 25 14:46:34 2017 LORILLARD Jimmy
** Last update Mon Apr 24 15:28:49 2017 LORILLARD jimmy
*/

#include "../../inc/jetpack_joyride.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
