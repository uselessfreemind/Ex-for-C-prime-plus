#include "E5.h"

int main(void)
{
  char to_stk[STR_LEN];
  Level in,out;
  Stack stk;
  size_t push_in=0;

  StackInit(&stk);
  puts("Enter the string to be pushed into stack");
  while(push_in<STK_SIZE)
  {
    scanf("%s",to_stk);
    while(getchar()!='\n')
      continue;
    for(int i=0; i<strlen(to_stk); i++)   //push to stack
    {
      in.sth.alphabet=to_stk[i];
      if(!StackIsFull(&stk))
      {
        push_in=StackPush(&stk,&in);
      }
      else
      {
        if(push_in)
          break;
        atexit(StackFailFull);
        exit(1);
      }
    }
  }
  puts("Here comes the reverse of input");
  for(int i=0; i<push_in; i++)   //pop up from stack
  {
    StackPop(&stk,&out);
    printf("%c",out.sth.alphabet);
  }
  atexit(StackSuc);

  return 0;
}
