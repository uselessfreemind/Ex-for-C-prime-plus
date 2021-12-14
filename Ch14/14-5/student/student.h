#ifndef _student_
#define _student_

#include <stdio.h>
#include <string.h>
#define CSIZE 4

struct name
{
    char surname[10];
    char lastname[10];
};
struct student
{
    struct name st;
    float grade[3];
    float average;
};

void data_input(struct student *);
void calculate(struct student * );
void data_output(struct student *);

#endif // _student_
