/* Modular c program to perform the following: 
   1. Read any 3 integer values and find the largest 
   among the three
    
   2. find the avg of 3 integers read
   
   3. find the sum of squares of 3 numbers
*/
#include<stdio.h>

int max(int, int, int);
float avg(int, int, int);
int sum(int, int, int);
main()
{
  int a,b,c,largest,add;
  float average;
  printf("Enter the three integers: ");
  scanf("%i %i %i",&a,&b,&c);
  largest = max(a,b,c);
  average = avg(a,b,c);
  add = sum(a,b,c);
  printf("The largest of the 3 numbers is %i\n",largest);
  printf("The average of the 3 numbers is %f\n",average);
  printf("The sum of squares of the 3 numbers is %i\n",add);
}
int max(int a, int b, int c)
{
  if(a > b && a > c)
  {
    return a;
  }
  if(b > a && b > c)
  {
    return b;
  }
  if(c > a && c > b)
  {
    return c;
  }
}
float avg(int a, int b, int c)
{
  return (a+b+c)/3.0;
}
int sum(int a, int b, int c)
{
  return (a*a + b*b + c*c);
}
