// TO DISPLAY THE CONTENTS OF STRING USING WHILE LOOP - METHOD-4
#include <stdio.h>

int main()
{
    char c[] = "Rahul";
    int i = 0;
    while (*(c + i) != '\0')
    {
        printf("%c", *(c + i));
        i++;
    }
    printf("\n\n");
    return 0;
}


