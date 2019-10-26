include<stdio.h>
#include<cs50.h>
#include <strings.h>

int main(void)
{
    int i;

    string name = get_string();

    printf("%c", toupper(name[0]));

    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] == ' ')
        {

            printf("%c", toupper(name[i + 1]));
        }
    }
    printf("\n");
}
