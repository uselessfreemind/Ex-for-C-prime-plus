#include "E1.h"

void RevShowFilm(struct film * in)
{
 if(in->next)
  RevShowFilm(in->next);
 printf("Movie: %s Rating: %d\n",in->title,in->rating);
}
