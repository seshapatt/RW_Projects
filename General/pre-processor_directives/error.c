#include<stdio.h>
#include<conio.h>
#define age 12

int main()
{
    #if age>10
    #error age cannot be greater than 10
    #endif // age
}
