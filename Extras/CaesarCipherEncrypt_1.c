/* Program to convert plaintext to ciphertext using
 caesar cipher*/
/* Method 1 */
#include<stdio.h>
#include<string.h>
main()
{
  char alph[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  char plaintext[1000];
  int key,E;
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
  
