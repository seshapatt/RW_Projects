#include<stdio.h>
#include<conio.h>
//#define age 10
#ifndef age
#define age 120
#endif // age

int main()
{
    printf("%d",age);//120 if commented
}
