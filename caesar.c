#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main(int argc,string a[])
{
    int i;

    if (argc != 2)
    {
        printf("/n");
     return 1;
    }

  int b = atoi(a[1]);

  if (b<0)
  {
      printf("/n");
      return 1;
  }
  else
  {
      printf("plaintext:");
      string s = get_string();
      printf("ciphertext:");
      for (i=0;i<strlen(s);i++)
       {
           if islower(s[i])
       {
         s[i] =( (s[i]+(b) )-(97) )%26 +97;

          printf("%c",s[i]);

       }
       else if isupper(s[i])
          {
              s[i] = ((s[i]+(b) )-(65) )%29 + 65;

              printf("%c",s[i]);
          }
        else
        {

            printf("%c",s[i]);

        }
       }
    printf("\n");
        return 0;
  }
  }



