/* Program to implement student grading system using
else if ladder
90-100 S
80-89 A
70-79 B
60-69 C
50-59 D
40-49 E
0-39 F
*/
#include <stdio.h>

main() 
{
    int marks;
    char grade;

    printf("Enter the student's marks: ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100) 
    {
        grade = 'S';
    }
    else if (marks >= 80 && marks < 90) 
    {
        grade = 'A';
    }
    else if (marks >= 70 && marks < 80) 
    {
        grade = 'B';
    }
    else if (marks >= 60 && marks < 70) 
    {
        grade = 'C';
    }
    else if (marks >= 50 && marks < 60) 
    {
        grade = 'D';
    }
    else if (marks >= 40 && marks < 50) 
    {
        grade = 'E';
    }
    else 
    {
        grade = 'F';
    }
    printf("The student's grade is: %c\n", grade);
}
