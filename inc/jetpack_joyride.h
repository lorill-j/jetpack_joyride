/*
** jetpack_joyride.h for jetpack_joyride.h in /home/jimmy/inc
** 
** Made by LORILLARD jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Mon Apr 24 15:08:49 2017 LORILLARD jimmy
** Last update Wed Apr 26 01:42:46 2017 LORILLARD jimmy
*/

#ifndef _JETPACK_JOYRIDE_H_
# define _JETPACK_JOYRIDE_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct s_list t_list;
struct s_list {
  char *str;
  t_list *next;
};

typedef enum s_pattern {
  SPACE = ' ',
  TRAP = 'x',
  BONUS ='B',
  MALUS = 'M'
} t_pattern;

void	my_putchar(char c);

void	my_putstr(char *str);

void	my_put_nbr(int n);

void	my_put_int(int n);

int	my_strlen(char *str);

void	*xmalloc(int size);

void	map_pattern();

#endif /* !_JETPACK_JOYRIDE_H_ */
