#include<stdio.h>
#include<conio.h>
#define age 10
#define name "sesha"
#undef age

int main()
{
    #ifdef age
    printf("%s is %d years old",name,age);
    #endif
    printf("Age got undefined");
}
