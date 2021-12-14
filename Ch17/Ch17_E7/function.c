#include "E7.h"
#include "function.h"

void InsertItem(Tree * tree)
{
  Item new_item;
  puts("Enter the name");
  scanf("%10s",&new_item.word);
  while(getchar()!='\n')
    continue;
  if(AddItem(tree,&new_item))
    puts("Operation successes");
  else
    puts("Operation fail,please check program");
}

void SingleDel(Tree * tree)
{
  Item to_del;
  puts("Enter the item name to delete");
  scanf("%10s",&to_del.word);
  while(getchar()!='\n')
    continue;
  if(DeleteItem(tree,&to_del))
    puts("Successfully delete an item from the tree");
  else
    fprintf(stderr,"Deleting failed\n");
}

void AllDel(Tree * tree)
{
  Travers(tree->root,free);
  tree->levels=0;
  /*if(tree->root)
    fprintf(stderr,"fail to clear the tree\n");
  else
    puts("The tree is emptied");*/
}

void MainMenu(Tree * tree)
{
  static char choice=0;
  FILE * toread;
  while((choice=getchar())!='q')
  {
    while(getchar()!='\n')
      continue;
    switch(choice)
    {
    case 'a':
      TreeInit(tree);
      if(!tree->levels&&!tree->root)
        puts("Tree initialisation successful");
      break;
    case 'b':
      printf("There are totally %d items in the tree\n",TreeItemNum(tree));
      break;
    case 'c':
      InsertItem(tree);
      break;
    case 'd':
      SingleDel(tree);
      break;
    case 'e':
      AllDel(tree);
      break;
    case 'f':
      ReadIn(tree,toread);
      break;
    case 'g':
      printf("There are %d words in the file\n",TreeItemNum(tree));
      break;
    case 'h':
      puts("Enter the word to be counted");
      printf("The word you search presents %u times\n",WordCnt(tree));
      break;
    default:
      puts("Invalid option");
      break;
    }
    puts("\n**************************************************");
    printf("Enter the function you for test\n");
    puts("a) Tree initialisation        b) Item counting");
    puts("c) Insert item                d) Delete single");
    puts("e) Delete all                 f) Read in file");
    puts("g) Count total words          h) Count repeating word\n");
    puts("*****************************************************");
  }
}

void ReadIn(Tree * tree,FILE * org)
{
  char bufrd[STR_LEN];//buffer to store every word
  Item to_store;
  char eat;//eat blank char
  if((org=fopen("org.txt","r"))==NULL)
    fprintf(stderr,"Cannot open file\n");
  else
  {
    while(fscanf(org,"%s",bufrd)==1)
    {
      strncpy(to_store.word,bufrd,STR_LEN);
      to_store.occur_times=1;
      AddItem(tree,&to_store);
      eat=fgetc(org);
      if(eat==EOF)
        break;
      while(eat!=' '&&eat!='\n')
        continue;
    }
    if(fgetc(org)==EOF)
      puts("Successfully read in file");
    else
      fprintf(stderr,"Can't read file\n");
  }
}

u32 WordCnt(Tree * tree)
{
  Item to_count;
  pair result;
  Node *temp;
  scanf("%s",&to_count.word);
  while(getchar()!='\n')
    continue;
  result=SearchItem(tree, &to_count);
  if(result.child)
  return result.child->sth.occur_times;
  else
    fprintf(stderr,"There isn't the word.Please enter again\n");
    return 0;
  }
