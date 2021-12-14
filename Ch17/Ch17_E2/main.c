#include "E2.h"

int main(void)
{
    List movie;
    Item temp;

    InitializeList(&movie);
    if(ListIsFull(&movie))
    {
      fprintf(stderr,"No memory available! Bye!\n");
      exit(1);
    }

    puts("Enter first movie title: ");
    while(gets(temp.title)&&temp.title[0]!='\0')
    {
      puts("Enter your rating <0-10>: ");
      scanf("%d",&temp.rating);
      while(getchar()!='\n')
        continue;
      if(!AddItem(temp,&movie))
      {
         fprintf(stderr,"Problem allocating memory\n");
         break;
      }
      if(ListIsFull(&movie))
      {
        puts("The list is now full.");
        break;
      }
      puts("Enter next movie title (empty line to stop)");
    }

    if(ListIsEmpty(&movie))
      printf("No data entered. ");
    else
    {
      printf("Here is the movie list: \n");
      Traverse(&movie,showmovies);
    }
    printf("You entered %d movies.\n",ListItemCount(&movie));

    EmptyTheList(&movie);
      Traverse(&movie,showmovies);
       printf("You entered %d movies.\n",ListItemCount(&movie));
    printf("Bye\n");
    return 0;
}

