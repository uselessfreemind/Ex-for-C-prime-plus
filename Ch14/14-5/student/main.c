#include "student.h"



int main(void)
{
    struct student data[CSIZE];
    data_input(data);
    data_output(data);
    return 0;
}

void data_input(struct student * p)
{
   unsigned char i,j;
   p->average=0;
   for(i=0;i<CSIZE;i++,p++)
   {
     puts("Enter the name \n");
     scanf("%s %s",p->st.lastname,p->st.surname);
     puts("Input grade\n");
     for(j=0;j<3;j++)
     {
        scanf("%f",&(p->grade[j]));
        p->average+=(p->grade[j]);
     }
     p->average/=3;
   }

}
void data_output(struct student * p)
{
    unsigned i,j;
    for(i=0;i<CSIZE;i++,p++)
    {
      printf("%s,%s\n",p->st.lastname,p->st.surname);
      for(j=0;j<3;j++)
      {
         printf("His grade are %4.3f,%4.3f,%4.3f \n",p->grade[j]);
      }
      printf("His average score is %4.3f \n",p->average);
    }

}
