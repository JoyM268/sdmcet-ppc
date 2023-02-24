/* Program to convert plaintext to ciphertext using
 caesar cipher*/
/* Method 2 */
#include<stdio.h>
#include<string.h>
main()
{
  char alph[26]; 
  char plaintext[1000];
  int key,E;
  char ch = 'a';
  for(int i = 0; i < 26; i++)
  {
    alph[i] = ch;
    ch++;
  }
  printf("Enter plaintext: ");
  scanf("%s", plaintext);
  printf("Enter the key: ");
  scanf("%i",&key);
  printf("The ciphertext is: ");
  for(int i = 0; i < strlen(plaintext); i++)
  {
    for(int j = 0; j < 26; j++)
    {
      if(plaintext[i] == alph[j])
      {
        E = (j + key) % 26;
        if(E < 26)
        {
          printf("%c",alph[E]);
        }
        else
        {
          E = E - 26;
          printf("%c",alph[E]);
        }
        break;
      }
    }
  }
}
  
