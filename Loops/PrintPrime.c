/* Program to print prime numbers between given range of
n1 and n2 */
#include<stdio.h>
#include<math.h>

main()
{
  int n1,n2,remainder,prime;
  printf("Enter the number: ");
  scanf("%i %i",&n1,&n2);
  for(int i = n1; i <= n2; i++)
  {
    if(i == 0 || i == 1)
    {
      continue;
    }
    prime = 1;
    for(int j = 2; j <= sqrt(i); j++)
    {
      if(i%j == 0)
      {
        prime = 0;
        break;
      }
    }
    if(prime==1)
    {
      printf("%i\n",i);
    }
  }
}