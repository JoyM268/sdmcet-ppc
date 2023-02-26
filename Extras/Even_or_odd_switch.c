/* program to check even or odd number using switch case */
#include<stdio.h>

main()
{
  int num;
  printf("Enter a number: ");
  scanf("%i",&num);
  switch(num % 2)
  {
    case 0:
      printf("%i is even\n",num);
      break;
    case 1:
      printf("%i is odd\n",num);
      break;
  }
}
