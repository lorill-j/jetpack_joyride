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


  SDL_Surface *ecran = NULL, *zozor = NULL;
  SDL_Rect positionZozor;
  SDL_Event event;
  int continuer = 1;
  
  SDL_Init(SDL_INIT_VIDEO);
  
  ecran = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
  SDL_WM_SetCaption("Jetpack Joyride", NULL);
  
  zozor = SDL_LoadBMP("/home/jimmy/jetpack_joyride/trunk/img/sprite.bmp");
  SDL_SetColorKey(zozor, SDL_SRCCOLORKEY, SDL_MapRGB(zozor->format, 0, 0, 255));
  
  positionZozor.x = 0;
  positionZozor.y = 240;
  
  SDL_EnableKeyRepeat(1, 1);
  while (continuer)
    {
      SDL_WaitEvent(&event);
      switch(event.type)
	{
	case SDL_QUIT:
	  continuer = 0;
	  break;
	case SDL_KEYDOWN:
	  switch(event.key.keysym.sym)
	    {
	    case SDLK_UP:
	      positionZozor.y--;
	      break;
	    case SDLK_DOWN:
	      positionZozor.y++;
	      break;
	    }
	  break;
	}
      
      SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 255, 255, 255));
      SDL_BlitSurface(zozor, NULL, ecran, &positionZozor);
      SDL_Flip(ecran);
    }
  map_in_array();
  list = NULL;
  list = add_link(list, " ");
  print_list(list);
  SDL_FreeSurface(zozor);
  SDL_Quit();
  return EXIT_SUCCESS;
}
