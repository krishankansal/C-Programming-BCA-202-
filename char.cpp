#include <stdio.h>
int main()
{
    char c[] = "I am from IPEM II Sem";
    int i = 0;
    while (c[i] != '\0')
    {
        printf("%c", c[i]);
        i++;
    }
    printf("\n\n\n\n");
    return 0;
}
