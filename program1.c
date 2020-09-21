#include<stdio.h> 
int main ()
{
  struct student
  {
    char id[20];
    int age;
    float marks;
  };
  struct student stud;
  for (int i=0;i<20;i++)
  {
    printf ("Enter student ID: \n");
    scanf ("%s", &stud.id);
    printf ("Enter age: \n");
    scanf ("%d", &stud.age);
    printf ("Enter marks: \n");
    scanf ("%f", &stud.marks);
    {
      if ((stud.age>=20 && stud.age<=30)&&(stud.marks>=65 && stud.marks <=100))
      {
        printf ("%s is qualified. \n", stud.id);
      }
      else
      {
        printf ("%s is not qualified. \n", stud.id);
      }
    }
  }
  return 0;
}
