#ifndef _social_
#define _social_

struct name
{
 char firstname[20];
 char lastname[20];
 char midname[20];
};

 struct social_insu
 {
     unsigned long social_num;
     struct name information;
 };

void input(struct social_insu * p);
void output(struct social_insu * p);

#endif
