/* Program to perform the following:
1. Ask a question "What is the ISD code for India" ?
2. if the answer given by the user = 91, then print a
   success message and stop
   if answer entered is not equal to 91, then reask the
   user and decrement the score by 3
   score 10 for successful answer
3. Repeat the task for 3 times
4. if the answer is incorrect even after third attempt
   print the score as 0 and give the correct answer for
   question
   
Implement this using appropriate constucts of conditions
and loop */
#include <stdio.h>

main() 
{
    int score = 0;
    int answer;

    for (int i = 0; i < 3; i++) 
    {
        printf("What is the ISD code for India?\n");
        scanf("%i", &answer);

        if (answer == 91) 
        {
            score += 10;
            printf("Success\nYour score is %i\n", score);
            return 0;
        }
        else 
        {
            printf("Incorrect answer\nPlease try again\n");
            score -= 3;
        }
    }
    printf("Your score is 0\nThe correct answer is 91\n");
}



