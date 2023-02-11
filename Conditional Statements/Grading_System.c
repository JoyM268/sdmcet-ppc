/* WACP to implement student grading system based on the
total marks scored in all the subjects. Conditions are 
given below:
if total marks >= 450 & <= 500, Elite
               >= 350 & < 450, Good
               >= 250 & < 350, Average
               >= 180 & < 250, Pass
               otherwise, Fail
marks enteres for each subject cannot be < 0 or > 100 */
#include<stdio.h>

main()
{
  int m1,m2,m3,m4,m5,total;
  printf("Enter the marks of five subjects: ");
  scanf("%i %i %i %i %i",&m1,&m2,&m3,&m4,&m5);
  if((m1 < 0 || m1 >100) || (m2 < 0 || m2 > 100) || (m3 < 0 || m3 >100) || (m4 < 0 || m4 > 100) || (m5 < 0 || m5 > 100))
  {
    printf("The marks of each subject cannot be less than 0 or greater than 100");
    exit(0);
  }
  total = m1+m2+m3+m4+m5;
  if(total >= 450 && total <= 500)
  {
    printf(" Elite");
  }
  else if(total >= 350)
  {
    printf("Good");
  }
  else if(total >= 250)
  {
    printf("Average");
  }
  else if(total >= 180)
  {
    printf("Pass");
  }
  else
  {
    printf("fail");
  }
}