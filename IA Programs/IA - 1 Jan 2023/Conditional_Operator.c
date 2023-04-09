/* C program to find the value of the following function 
 and print the result 
 y = 0, if x=0 
 y = 1, if x>0 
 y = -1, if x<0 
 using ternary operator/conditional operator */ 
 #include<stdio.h> 
  
 main() 
 { 
   int x,result; 
   printf("Enter the value of x: "); 
   scanf("%i",&x); 
   result = (x==0)? 0 : ((x>0)? 1 : -1); 
   printf("The value of the y is: %i\n",result); 
 }
