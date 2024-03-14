// TO COUNT THE CHARACTERS IN STRING ENTERED BY USER
#include <stdio.h>

int main()
{
    char c[25];
    printf("Enter your name : ");
    scanf("%s", c);
    char *p = &c[0]; // we can also write c only
    int count = 0;
    while (*p != '\0')
    {
        count++;
        p++;
    }
    printf("Total number of characters = %d", count);
    printf("\n\n\n");
    return 0;
}
