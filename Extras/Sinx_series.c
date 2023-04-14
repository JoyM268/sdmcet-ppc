//Sine series
#include <stdio.h>
#include<math.h>
//Compiler version gcc  6.3.0
int factorial(int n)
{
  int fact = 1;
  for(int i = 2; i <=n; i++)
  {
    fact *=i;
  }
  return fact;
}
int main()
{
  float x,radian,n;
  printf("Enter the value of x: ");
  scanf("%f",&x);
  printf("Enter the number of terms:");
  scanf("%f",&n);
  radian = x*(3.142/180);
  float sum = 0.0;
  for(int i = 1, j = 1; i <= n; i++, j=j+2)
  {
    if(i%2 == 0)
    {
      sum -= pow(radian,j)/factorial(j);
    }
    else
    {
      sum += pow(radian,j)/factorial(j);
    }
  }
  printf("%f",sum);
}