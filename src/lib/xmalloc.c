/*
** xmalloc.c for xmalloc.c in /home/jimmy/src/lib
** 
** Made by LORILLARD jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Mon Apr 24 15:10:37 2017 LORILLARD jimmy
** Last update Mon Apr 24 15:23:54 2017 LORILLARD jimmy
*/
#include "../../inc/jetpack_joyride.h"

void	*xmalloc(int size)
{
  void	*memory;
  char	*str;
  int	str_len;

  str = "Malloc failed";
  str_len = my_strlen(str);
  if ((memory = malloc(size)) != NULL)
    return (memory);
  else
    write(2, str, str_len);
  return (0);
}
