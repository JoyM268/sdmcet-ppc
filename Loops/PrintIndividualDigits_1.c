/* Program to print the individual digits of a given
 number */
 /* Method 1 */
 #include<stdio.h>
 
 main()
 {
   int num,remainder;
   printf("Enter the number: ");
   scanf("%i",&num);
   while(num != 0)
   {
     remainder = num % 10;
     printf("%i\n",remainder);
     num = num/10;
   }
 }