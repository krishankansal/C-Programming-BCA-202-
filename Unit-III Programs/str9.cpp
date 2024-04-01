
#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    char name[30];
    puts("Enter Your Name : ");
    gets(name); // scanf("%s", name);
    printf("Hello %s", name);
    printf("\n\n\n");
    getch();
    return 0;
}
