/*
** my_strlen.c for my_strlen.c in /home/jimmy/lorill_j/src/lib
** 
** Made by LORILLARD Jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Sat Mar 25 14:47:12 2017 LORILLARD Jimmy
** Last update Sat Mar 25 22:30:29 2017 LORILLARD Jimmy
*/

int	my_strlen(char *str)
{
  int	i;
  
  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
