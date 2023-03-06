/* There are m different students in the class and each 
student marks is alloted for n different subjects write a 
c program that prints the following operations
1) read marks per student for different subjects
2)print all the details on the console window where each 
student are in a single row
3) find the highest marks scored in every subject and 
print associated roll number
4) print the total marks scored per student along with 
roll no.
5) print the avg marks scored per subject by all students
 of the marks */
   
#include<stdio.h>
#define ROW 50
#define COL 50

main()
{
  int m,n,i,j,marks[ROW][COL],total;
  float avg;
  printf("Enter the number of students: ");
  scanf("%i",&m);
  printf("Enter the number of subjects: ");
  scanf("%i",&n);
  printf("\n");
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      printf("Enter the marks of student %i in subject %i: ",i+1,j+1);
      scanf("%i",&marks[i][j]);
    }
  }
  printf("\n");
  printf("Roll no.");
  for(j = 0; j < n; j++)
  {
    printf("\tSubject %i",j+1);
  }
  printf("\n");
  for(i = 0; i < m; i++)
  {
    printf("%4i",i+1);
    for(j = 0; j < n; j++)
    {
      printf("\t\t%4i",marks[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  int index, highest;
  for(j = 0; j < n; j++)
  {
    index = 0;
    highest = marks[0][j];
    for(i = 0; i < m; i++)
    {
      if(highest < marks[i][j])
      {
        highest = marks[i][j];
        index = i;
      }
    }
    printf("The highest marks in subject %i is %i scored by rollno. %i\n",j+1,highest,index+1);
  }
  printf("\n");
  for(i = 0; i < m; i++)
  {
    total = 0;
    for(j = 0; j < n; j++)
    {
      total += marks[i][j];
    }
    printf("The total marks scored by roll no. %i is %i\n",i+1,total);
  }
  printf("\n");
  int sum;
  for(j = 0; j < n; j++)
  {
    sum = 0;
    for(i = 0; i < m; i++)
    {
      sum += marks[i][j];
    }
    printf("The average of subject %i is %.2f\n",j+1,(float)sum/m);
  }
}