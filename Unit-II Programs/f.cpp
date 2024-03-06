// SAVING STRING IN CHAR ARRAY
#include <stdio.h>
#include <stdlib.h>

int main()
{

    char name[] = "Dennis Ryan";
    int i = 0;
    while (name[i] != '\0')
    {
        printf("%c", name[i]);
        i++;
    }

    printf("\n\n\n\n");

    return 0;
}
