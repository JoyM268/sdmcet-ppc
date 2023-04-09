/* Program to find sum of all elements in the principal diagonal of a square matrix */ 
 #include<stdio.h> 
 #include<stdlib.h> 
 #define ROW 10 
 #define COL 10 
 main() 
 { 
   int arr[ROW][COL],i,j,m,n,sum = 0; 
   printf("Enter the order of the matrix: "); 
   scanf("%i %i",&m,&n); 
   if(m != n) 
   { 
     printf("It is not a square matrix\n"); 
     exit(0); 
   } 
   printf("Enter %i elements:\n",m*n); 
   for(i = 0; i < m; i++) 
   { 
     for(j = 0; j < n; j++) 
     { 
       scanf("%i",&arr[i][j]); 
     } 
   }  
   for(i = 0; i < m; i++) 
   { 
     for(j = 0; j < n; j++) 
     { 
       if(i == j) 
       { 
         sum += arr[i][j];
       } 
     } 
   }
   printf("The sum of principal diagonal elements is: %i\n",sum);
 }
