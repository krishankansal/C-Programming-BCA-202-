// To copy the contents of file
#include "stdio.h"
#include "stdlib.h"
main()
{
    FILE *fs, *ft;
    char ch;
    fs = fopen("a.txt", "r");
    if (fs == NULL)
    {
        puts("Cannot open source file");
        exit(1);
    }
    ft = fopen("b.txt", "w");
    if (ft == NULL)
    {
        puts("Cannot open target file");
        fclose(fs);
        exit(1);
    }
    while (1)
    {
        ch = fgetc(fs);
        if (ch == EOF)
            break;
        else
            fputc(ch, ft);
    }
    fclose(fs);
    fclose(ft);
}