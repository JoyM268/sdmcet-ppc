/* Program to decipher a cipher made using caesar cipher
without a key, it trys all the combination of key 
possible*/
#include<stdio.h>
#include<string.h>
main()
{
  char alph[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  char ciphertext[1000];
  int key,D;
  printf("Enter ciphertext: ");
  scanf("%s", ciphertext);
  for(int key = 1; key < 26; key ++)
  {
    printf("The plaintext if key is %i: ",key);
    for(int i = 0; i < strlen(ciphertext); i++)
    {
      for(int j = 0; j < 26; j++)
      {
        if(ciphertext[i] == alph[j])
        {
          if(j - key < 0)
          {
            D = (j - key + 26) % 26;
            printf("%c",alph[D]);
          }
          else
          {
            D = (j - key) % 26;
            printf("%c",alph[D]);
          }
          break;
        }
      }
    }
    printf("\n");
  }
}