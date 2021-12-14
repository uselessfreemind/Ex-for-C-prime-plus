#include "E1.h"

int main(void)
{


  struct film * prev, * current,* head=NULL;


  char input[TSIZE];

  //Collect and store data
  puts("Enter first movie title: ");
  while(gets(input)!=NULL && input[0]!='\0')
  {
    current=(struct film *)malloc(sizeof(struct film));
    if(head==NULL)
    {
      head=current;
      current->last=NULL;
    }
    else
    {
      prev->next=current;
      current->next=NULL;
      current->last=prev;

    }
    strcpy(current->title, input);
    puts("Enter your rating <0-10>: ");
    scanf("%d",&current->rating);
    while(getchar()!='\n')
      continue;
    puts("Enter next movie title (empty line to stop): ");
    prev=current;
  }
  //show the film list
  if(head==NULL)
    printf("No data entered, ");
  else
    printf("Here is the movie list: \n");
  //current=head;
  //RevShowFilm(current);
  while(current)
  {
    printf("Movie: %s Rating: %d\n",current->title,current->rating);
    if(!current->last)
      break;
    current=current->last;
  }
  while(current!=NULL)
  {
    free(current);
    current=current->next;
  }
  printf("Bye!\n");

  return 0;
}
