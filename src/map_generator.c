/*
** test.c for test.c in /home/jimmy/src
** 
** Made by LORILLARD jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Mon Apr 24 15:26:03 2017 LORILLARD jimmy
** Last update Thu Apr 27 01:19:20 2017 LORILLARD jimmy
*/
#include "../inc/jetpack_joyride.h"

char	*map_pattern(int line)
{
  int	i;
  int	j;
  char	*str;

  srand(time(NULL));
  j = 0;
  str = xmalloc(100 * sizeof(char) + 1);
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

void	map_display(char **str)
{
  int	i;
  
  i = 0;
  map_border();
  my_putchar('\n');
  while (i != 3)
    {
      my_putstr(str[i]);
      my_putchar('\n');
      i++;
    }
  map_border();
}

void	map_in_array()
{
  int   i;
  char	**str;
  char	*strcp;

  i = 0;
  str = xmalloc(3 * sizeof(char *));
  while (i != 3)
    {
      strcp = map_pattern(i);
      str[i] = xmalloc(my_strlen(strcp) * sizeof(char) + 1);
      str[i] = strcp;
      i++;
    }
  map_display(str);
}
