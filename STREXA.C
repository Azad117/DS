#include<stdio.h>
struct StudentData{

    int stu_id;
    int stu_age;
};
int main()
{
     struct StudentData student;



     student.stu_id = 1234;
     student.stu_age = 30;


     printf("\nStudent Id is: %d", student.stu_id);
     printf("\nStudent Age is: %d", student.stu_age);
     return 0;
}