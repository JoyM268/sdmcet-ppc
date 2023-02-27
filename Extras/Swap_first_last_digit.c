/* Program to swap first and last digit of a number */
#include<stdio.h>
#include<math.h>
main()
{
  int num,firstdigit,lastdigit,swap,last,count = 0;
  printf("Enter the number: ");
  scanf("%i",&num);
  lastdigit = num % 10;
  firstdigit = num;
  printf("The number before swap: %i\n",num);
  while(firstdigit >= 10)
  {
    firstdigit = firstdigit / 10;
    count ++;
  }
  swap = lastdigit * pow(10,count);
  swap = swap + num % (int)(pow(10,count));
  swap = swap - lastdigit;
  swap = swap + firstdigit;
  printf("The number after swap: %i\n",swap);
}