/* Program to convert ciphertext to plaintext using
 caesar cipher*/
/* Method 1 */
#include<stdio.h>
#include<string.h>
main()
{
  char alph[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  char ciphertext[1000];
  int key,D;
  printf("Enter ciphertext: ");
  scanf("%s", ciphertext);
  printf("Enter the key: ");
  scanf("%i",&key);
  printf("The plaintext is: ");
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
}
