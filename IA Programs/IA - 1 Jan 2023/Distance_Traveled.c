/* Write a C program to compute the distance for the  
 given values of initial velocity,time and acceleration. */ 
 /* s = ut + 1/2 at^2 */ 
 #include <stdio.h> 
  
 main()   
 { 
     float s,u,t,a; 
     printf("Enter the initial velocity: "); 
     scanf("%f", &u); 
     printf("Enter the time taken: "); 
     scanf("%f", &t); 
     printf("Enter the acceleration: "); 
     scanf("%f", &a); 
     s = u * t + (float)1/2 * a * t * t; 
     printf("The distance is: %.3f\n",s); 
 }
