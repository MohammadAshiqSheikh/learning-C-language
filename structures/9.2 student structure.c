#include<stdio.h>

typedef struct
{
char id [10];
char name [50];
char year [10];
char grade;
} student;

void increase_grade(student*);
void decrease_grade(student*);
void print_student(student*);

int main()
{
  student stu1 = {.id = "001", .name = "Shah sheikh", .year = "second", .grade = 'B'};
  student stu2 = {.id = "002", .name = "mohammad sheikh", .year = "first", .grade = 'c'};
  student stu3 = {.id = "003", .name = " hello sheikh", .year = "third", .grade = 'f'};
  return 0;

  printf("welcome to the student management system\n");
  printf("here are the student details:\n");
  print_student(&stu1);
  print_student(&stu2);
  print_student(&stu3);

  decrease_grade(&stu1);
  increase_grade(&stu2);

  printf("after updating the grades:\n");
  print_student(&stu1);
  print_student(&stu2);
  print_student(&stu3);

}

void increase_grade(student *stu)
{
stu->grade--;
}
void decrease_grade(student *stu)
{
  stu->grade++;
}
void print_student(student *stu)
{
  printf("ID: %s\n", stu->id);
  printf("Name: %s\n", stu->name);
  printf("Year: %s\n", stu->year);
  printf("Grade: %c\n", stu->grade);
}