/* Program to decipher a cipher made using caesar cipher
without a key, it trys all the combination of key 
possible*/
#include<stdio.h>
#include<string.h>
main()
{
  char alph[26], ch = 'a'; 
  char ciphertext[1000];
  int key,D;
  for(int i = 0; i < 26; i++)
  {
    alph[i] = ch;
    ch++;
  }
  printf("Enter ciphertext: ");
  scanf("%s", ciphertext);
  int stringlength = strlen(ciphertext);
  for(int key = 1; key < 26; key ++)
  {
    printf("The plaintext if key is %i: ",key);
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
    printf("\n");
  }
}
