/* Program to read four different marks IA-1, IA-2, IA-3, 
CTA scored by a student in a given subject. Compute the
CIE scored by that student in the given subject and print
it on console */
/* Method 1 */
#include<stdio.h>
#define SIZE 5
main()
{
  int marks[SIZE],i,lowest_ia,CIE = 0;
  printf("Enter the 3 IA marks(<= 20) and CTA marks(<= 10):\n");
  for(i = 0; i < 4; i++)
  {
    scanf("%i",&marks[i]);
  }
  lowest_ia = (marks[0] < marks[1])? ((marks[0] < marks[2])? marks[0] : marks[2]) : ((marks[1] < marks[2])? marks[1] : marks[2]);
  for(i = 0; i < 4; i++)
  {
    if(marks[i] == lowest_ia)
    {
      break;
    }
  }
  for(int j = 0; j < 4; j++)
  {
    if(i != j)
    {
      CIE += marks[j];
    }
  }
  printf("The CIE marks scored is %i\n",CIE);
}