#include <stdio.h>
#include <string.h>

struct students // tag
{
    char name[25];
    int roll_no;
    char grade[10];
};


int main()
{
  struct students s={"Aravind",4,"B.E"};  // object s;
  struct students s1={"Veda",57,"M.S"};
  printf("Student1 details %s %d %s",s.name,s.roll_no,s.grade);
  printf("\nStudent details %s %d %s",s1.name,s1.roll_no,s1.grade);
}
