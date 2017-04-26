/*
** test.c for test.c in /home/jimmy/src
** 
** Made by LORILLARD jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Mon Apr 24 15:26:03 2017 LORILLARD jimmy
** Last update Tue Apr 25 19:14:40 2017 LORILLARD jimmy
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
  t_pattern char_map;

  char_map = rand() % 4 + 1;
  my_put_nbr(char_map);
  list = NULL;
  list = add_link(list, "**********************************************\n");
  list = add_link(list, "   l        x       x   m                  x l\n");
  list = add_link(list, "      x                        m           x l\n");
  list = add_link(list, "  x                 x          l     x       l\n");
  list = add_link(list, "**********************************************\n");
  print_list(list);
  return (0);
}
