#include "E5.h"

void StackInit(Stack * p_stk)
{
  p_stk->top=NULL;
  p_stk->lv_num=0;
}

_Bool StackIsEmpty(Stack * p_stk)
{
  return (p_stk->lv_num)?0:1;
}

_Bool StackIsFull(Stack * p_stk)
{
  return (p_stk->lv_num==STK_SIZE)?1:0;
}

int StackPush(Stack * p_stk, Level * lv_in)
{
  Level * temp, * new_lv;
  if(!p_stk->lv_num)
  {
   //p_stk->top=lv_in;
   p_stk->top=(Level *)malloc(sizeof(Level));
   memcpy(p_stk->top,lv_in,sizeof(Level));
    p_stk->top->next=NULL;
    p_stk->lv_num++;
  }
  else
  {
    p_stk->lv_num++;//level+1
    new_lv=(Level *)malloc(sizeof(Level));//build new level
    temp=p_stk->top;//save the previous top level point
    p_stk->top=new_lv;
    memcpy(p_stk->top,lv_in,sizeof(Level));
    p_stk->top->next=temp;
  }
  return p_stk->lv_num;
}

void StackPop(Stack * p_stk, Level * lv_out)
{
  //lv_out=p_stk->top;
memcpy(lv_out,p_stk->top,sizeof(Level));
  p_stk->top=p_stk->top->next;
  p_stk->lv_num--;
}

void StackFailFull(void)
{
  puts("Operation fail,stack is full");
}

void StackSuc(void)
{
  puts("\nSuccessfully perform stack push and pop,nicely done");
}
