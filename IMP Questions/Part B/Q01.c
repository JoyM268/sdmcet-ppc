/* Write a C program to find the GCD and LCM of any 3 
given integers */
#include<stdio.h>

int GCD(int,int);
int LCM(int,int);
main()
{
  int g1,g2,l1,l2,a,b,c;
  printf("Enter the 3 numbers: ");
  scanf("%i %i %i",&a,&b,&c);
  g1 = GCD(a,b);
  g2 = GCD(g1,c);
  l1 = LCM(a,b);
  l2 = LCM(l1,c);
  printf("LCM = %i\n",l2);
  printf("GCD = %i\n",g2);
}
int GCD(int m, int n)
{
  while(m != n)
  {
    if(m > n)
    {
      m = m - n;
    }
    else
    {
      n = n - m;
    }
  }
  return m;
}
int LCM(int m, int n)
{
  return (m*n)/GCD(m,n);
}
