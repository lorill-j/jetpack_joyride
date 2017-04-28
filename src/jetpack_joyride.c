/*
** test.c for test.c in /home/jimmy/src
** 
** Made by LORILLARD jimmy
** Login   <lorill_j@etna-alternance.net>
** 
** Started on  Mon Apr 24 15:26:03 2017 LORILLARD jimmy
** Last update Thu Apr 27 01:19:36 2017 LORILLARD jimmy
*/
#include "../inc/jetpack_joyride.h"

t_list		*add_link(t_list *list, char *str)
{
  t_list	*node;

  node = xmalloc(sizeof(t_list));
  node->str = str;
  node->next = list;
  return (node);
}

void		print_list(t_list *list)
{
  while (list)
    {
      my_putstr(list->str);
      list = list->next;
    }
}

int		main(void)
{
  t_list	*list;
  SDL_Surface *ecran = NULL;
  SDL_Surface *imageDeFond = NULL;
  SDL_Surface *zozor = NULL;
  SDL_Rect positionZozor;
  SDL_Rect positionFond;
  positionFond.x = 0;
  positionFond.y = 0;
  positionZozor.x = 500;
  positionZozor.y = 260;
  
  SDL_Init(SDL_INIT_VIDEO);
  ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
  SDL_WM_SetCaption("Jetpack Joyride", NULL);

  imageDeFond = SDL_LoadBMP("/home/jimmy/jetpack_joyride/trunk/img/lac_en_montagne.bmp");
  SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);
  
  zozor = SDL_LoadBMP("/home/jimmy/jetpack_joyride/trunk/img/zozor.bmp");
  SDL_SetColorKey(zozor, SDL_SRCCOLORKEY, SDL_MapRGB(zozor->format, 0, 0, 255));
  SDL_SetAlpha(zozor, SDL_SRCALPHA, 255);
  SDL_BlitSurface(zozor, NULL, ecran, &positionZozor);

  SDL_Flip(ecran);
  pause();
  
  map_in_array();
  list = NULL;
  list = add_link(list, " ");
  print_list(list);
  
  SDL_FreeSurface(imageDeFond);
  SDL_FreeSurface(zozor);
  SDL_Quit();
  return EXIT_SUCCESS;
}
