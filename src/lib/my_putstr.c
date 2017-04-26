/*
** my_putstr.c for my_putstr.c in /home/jimmy/lorill_j/src/lib
** 
** Made by LORILLARD Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Sat Mar 25 14:46:54 2017 LORILLARD Jimmy
** Last update Mon Apr 24 15:24:44 2017 LORILLARD jimmy
*/
#include "../../inc/jetpack_joyride.h"

void	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
}
