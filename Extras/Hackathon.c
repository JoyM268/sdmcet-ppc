#include<stdio.h> 
#define SIZE 50

void check_acc(int acc[][SIZE]);
void lowest(int acc[][SIZE]);
void highest(int acc[][SIZE]);
void transaction(int acc[][SIZE]);
main()
{
  int acc[SIZE][SIZE],i,j; 
  printf("Customer details:\n");
  for(i=0;i < 5; i++)
  {
    printf("Enter account number and balance of customer %i:",i+1);
    for(j=0; j < 2; j++)
      {
        scanf("%i",&acc[i][j]);
      }
  }
  int option;
  do
  {
    printf("\nMain Menu\n");
    printf("1.Disply Account Details\n");
    printf("2.Transaction Menu\n");
    printf("3.Lowest Balance\n");
    printf("4.Highest Balance\n");
    printf("5.Exit\n");
    printf("Enter the choice(1,2,3,4,5): ");
    scanf("%i",&option);
    switch(option)
    {
      case 1:
        check_acc(acc);
        break;
      case 2:
        transaction(acc);
        break;
      case 3: 
        lowest(acc);
        break;
      case 4:
        highest(acc);
        break;
      case 5:
        printf("Exiting...\n");
        break;
      default:
        printf("Invalid Input\n");
    }
  }
  while(option != 5);
}
void check_acc(int acc[][SIZE])
{
  int acc_num,i,j,prime = 0;
  Read:
  printf("\nEnter the account number of the customer: ");
  scanf("%i",&acc_num);
  for(i=0; i < 5; i++)
  {
    if(acc[i][0] == acc_num)
    {
      prime = 1;
      break;
    }
  }
  if(prime == 0)
  {
    printf("Invalid Account Number\n\n");
    goto Read;
  }
  printf("\n"); 
  for(i=0; i < 5; i++)
  {
    if(acc[i][0] == acc_num)
    {
      printf("Customer\tAccount Number\tBalance\n");
      for(j=0; j < 2; j++)
      {
        printf("%i\t\t\t%i\t\t%i\n",i+1,acc[i][0],acc[i][1]);
        break;
      }
      break;
    }
  }
}
void lowest(int acc[][SIZE])
{
  int lowest = acc[0][1],i,j;
  for(i = 1; i < 5; i++)
  {
    if(lowest > acc[i][1])
    {
      lowest = acc[i][1];
    }
  } 
  printf("\nLowest: \n"); 
  for(i=0; i < 5; i++)
  {
    if(acc[i][1] == lowest)
    {
      printf("Customer\tAccount_Number\tBalance\n");
      printf("%i\t\t\t%i\t\t%i\n",i+1, acc[i][0],acc[i][1]); 
      break;
    }
  }
}
void highest(int acc[][SIZE])
{
  int highest = acc[0][1],i,j;
  for(i = 1; i < 5; i++)
  {
    if(highest < acc[i][1])
    {
      highest = acc[i][1];
    }
  } 
  printf("\nHighest: \n"); 
  for(i=0; i < 5; i++)
  {
    if(acc[i][1] == highest)
    {
      printf("Customer\tAccount_Number\tBalance\n");
      printf("%i\t\t\t%i\t\t%i\n",i+1, acc[i][0],acc[i][1]);
      break; 
    }
  }
}
void transaction(int acc[][SIZE])
{
  int acc_num,i,j,prime = 0;
  Read:
  printf(",\nEnter the account number of the customer: ");
  scanf("%i",&acc_num);
  for(i=0; i < 5; i++)
  {
    if(acc[i][0] == acc_num)
    {
      prime = 1;
      break;
    }
  }
  if(prime == 0)
  {
    printf("Invalid Account Number\n\n");
    goto Read;
  }
  int choice;
  int amt;
  do
  {
    printf("\nTransaction Menu\n1.check account balance\n2.deposit amount\n3.withdraw\n4.Go Back to main menu\nEnter the choice(1,2,3,4): ");
    scanf("%i",&choice);
    switch(choice)
    {
      case 1:
        printf("Balance: %i\n",acc[i][1]); 
        break;
      case 2:
        printf("Enter the amount to be deposited:");
        scanf("%i",&amt);
        acc[i][1] += amt; 
        printf("Balance: %i\n",acc[i][1]);
        break;
      case 3:
        printf("Enter the amount to be withdrawn:"); 
        scanf("%i",&amt);
        acc[i][1] -= amt; 
        printf("Balance: %i\n",acc[i][1]); 
        break;
      case 4:
        printf("Returning to the main menu\n"); 
        break;
      default:
        printf("Invalid Input\n");
    }
  }
  while(choice != 4);
}