/* Program to check if the given number is prime or not */
/* Method 3 */
#include<stdio.h>
#include<math.h>

main()
{
  int num,prime=1,remainder;
  printf("Enter the number: ");
  scanf("%i",&num);
  for(int i = 2; i <= sqrt(num); i++)
  {
    remainder = num%i;
    if(remainder==0)
    {
      prime = 0;
      break;
    }
  }
  if(prime == 1)
  {
    printf("%i is a prime number\n",num);
  }
  else
  {
    printf("%i is not a prime number\n",num);
  }
}