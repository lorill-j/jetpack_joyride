/*
** test.c for test.c in /home/jimmy/src
** 
** Made by LORILLARD jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Mon Apr 24 15:26:03 2017 LORILLARD jimmy
** Last update Thu Apr 27 01:01:11 2017 LORILLARD jimmy
*/
#include "../inc/jetpack_joyride.h"

char	*map_pattern(int line)
{
  int	i;
  int	j;
  char	*str;

  srand(time(NULL));
  j = 0;
  str = xmalloc(j * sizeof(char) + 1);
  while (j != 100)
    {
      if (line == 0)
	i = rand() % 98;
      else if (line == 1)
	i = rand() % 99;
      else if (line == 2)
	i = rand () % 100;
      if (i <= 80)
	str[j] = (SPACE);
      else if (i > 80 && i <= 85)
	str[j] = (TRAP);
      else if (i > 85 && i <= 93)
	str[j] = (BONUS);
      else if (i > 93 && i <= 100)
	str[j] = (MALUS);
      j++;
    }
  str[j] = '\0';
  return(str);
}

void	map_border()
{
  int	i;

  i = 0;
  while (i != 100)
    {
      my_putchar('-');
      i++;
    }
}

void	map_display()
{
  int   i;
  char	**str;
  char	*strcp;

  i = 0;
  str = xmalloc(3 * sizeof(char *));
  map_border();
  my_putchar('\n');
  while (i != 3)
    {
      strcp = map_pattern(i);
      my_putstr(strcp);
      str[i] = xmalloc(my_strlen(strcp) * sizeof(char) + 1);
      str[i] = strcp;
      my_putchar('\n');
      i++;
    }
  map_border();
}
