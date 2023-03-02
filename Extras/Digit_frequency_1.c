/* Program to count frequency of digits in an integer */
/* Method 1 */
#include<stdio.h>
#define base 10

main()
{
  int freq[base],num,remainder;
  printf("Enter a integer: ");
  scanf("%i",&num);
  for(int i = 0; i < base; i++)
  {
      freq[i] = 0;
  }
  while(num > 0)
  {
    remainder = num % 10;
    for(int i = 0; i < base; i++)
    {
      if(i == remainder)
      {
        freq[i]++;
      }
    }
    num = num / 10;
  }
  for(int i = 0; i < base; i++)
  {
    printf("The frequency of %i = %i\n",i,freq[i]);
  }
}
