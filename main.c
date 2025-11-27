#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  struct student{
         int     ID;
         char    name[20];
         double  grade;
         };
         
int main(int argc, char *argv[])
{
    struct student stud = {10, "Hyerin", 4.3};   //변수 선언 초기화 
    
    stud.ID = 17;
    strcpy(stud.name, "SS");
    stud.grade = 2.0;
    
    printf("ID : %i, name : %s, grade: %lf\n", stud.ID, stud.name, stud.grade);

  system("PAUSE");	
  return 0;
}
