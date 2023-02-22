/* Program to read n different scores of a batsman in n 
different innings find the highest score scored by the 
cricketer */
#include <stdio.h>

main() 
{
    int n, i, max_score;
    printf("Enter the number of innings: ");
    scanf("%i", &n);
    int scores[n];
    for (i = 0; i < n; i++) 
    {
        printf("Enter the scores of the batsman in %i innings:",i+1);
        scanf("%i", &scores[i]);
    }
    max_score = scores[0];
    for (i = 0; i < n; i++) 
    {
      if (scores[i] > max_score) 
        {
            max_score = scores[i];
        }
    }
    printf("The highest score scored by the batsman is: %i\n", max_score);
}
