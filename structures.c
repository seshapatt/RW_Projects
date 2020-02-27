#include<stdio.h>
#include<conio.h>
#include"user_list.h"

int main()
{
    struct users aravind;
    struct users amma;
    aravind.employee_id=25;
    amma.employee_id=30;
    printf("Employee id of aravind is %d\n",aravind.employee_id);
    printf("Employee id of amma is %d",amma.employee_id);
}
