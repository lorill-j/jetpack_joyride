/*
** test.c for test.c in /home/jimmy/src
** 
** Made by LORILLARD jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Mon Apr 24 15:26:03 2017 LORILLARD jimmy
** Last update Wed Apr 26 01:40:58 2017 LORILLARD jimmy
*/
#include "../inc/jetpack_joyride.h"

t_list *add_link(t_list *list, char *str)
{
  t_list *node;

  node = xmalloc(sizeof(t_list));
  node->str = str;
  node->next = list;
  return (node);
}

void print_list(t_list *list)
{
  while (list)
    {
      my_putstr(list->str);
      list = list->next;
    }
}

int main(void)
{
  t_list *list;

  map_pattern();
  list = NULL;
  list = add_link(list, " ");
  print_list(list);
  return (0);
}
