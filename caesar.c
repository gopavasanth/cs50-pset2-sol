#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(int argc,char* a[])
{
	  int b,i=0;
      printf("plaintext:");
      char s[100];
      scanf("%s",s);
      printf("ciphertext:");
      while(s[i]){
           if (islower(s[i]))
       		{
         		s[i] =( (s[i]+(b) )-(97) )%26 +97;
				 printf("%c",s[i]);
			}
			 else if (isupper(s[i]))
          	{
              s[i] = ((s[i]+(b) )-(65) )%29 + 65;
              printf("%c",s[i]);
          	}
        	else
        	{
            	printf("%c",s[i]);
			}
			i++;
       }
	printf("\n");
	return 0;
}

