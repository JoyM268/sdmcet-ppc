/* Program to convert ciphertext to plaintext using
 caesar cipher*/
#include<stdio.h>
#include<string.h>
main()
{
  char alph[26];
  char ciphertext[1000];
  int key,D;
  char ch = 'a';
  for(int i = 0; i < 26; i++)
  {
    alph[i] = ch;
    ch++;
  }
  printf("Enter ciphertext: ");
  scanf("%s", ciphertext);
  printf("Enter the key: ");
  scanf("%i",&key);
  int stringlength = strlen(ciphertext);
  printf("The plaintext is: ");
  for(int i = 0; i < stringlength; i++)
  {
    for(int j = 0; j < 26; j++)
    {
      if(ciphertext[i] == alph[j])
      {
        D = (j - key) % 26;
        if(D >= 0)
        {
          printf("%c",alph[D]);
        }
        else
        {
          D = D + 26;
          printf("%c",alph[D]);
        }
        break;
      }
    }
  }
}
