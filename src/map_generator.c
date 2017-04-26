/*
** test.c for test.c in /home/jimmy/src
** 
** Made by LORILLARD jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Mon Apr 24 15:26:03 2017 LORILLARD jimmy
** Last update Wed Apr 26 01:39:45 2017 LORILLARD jimmy
*/
#include "../inc/jetpack_joyride.h"

void	map_pattern()
{
  int	i;
  int	j;
    
  srand(time(NULL));
  j = 0;
  while (j != 100)
    {
      i = rand() % 101;
      if (i <= 80)
	my_putchar(SPACE);
      else if (i > 80 && i <= 85)
	my_putchar(TRAP);
      else if (i > 85 && i <= 93)
	my_putchar(BONUS);
      else if (i > 93 && i <= 100)
	my_putchar(MALUS);
      else
	my_putstr("fail");
      j++;
    }
}
