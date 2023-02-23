/* Program to find GCD and LCM of two given numbers */
/* Method 1 */
#include<stdio.h>

main()
{
  int m,n,a,b,lcm;
  printf("Enter the two numbers: ");
  scanf("%i %i",&m,&n);
  a = m;
  b = n;
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
  lcm = a * b / m;
  printf("The GCD of the two numbers is: %i\n",m);
  printf("The LCM of the two numbers is: %i\n",lcm);
}