// Passing array as an argument
#include <stdio.h>

void addtwo(int x[], int size)
{
    for (int i = 0; i < 6; i++)
    {
        x[i] = x[i] + 2;
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++)
    {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
    addtwo(arr, 6);
    printf("-----After Funtion Call----\n");
    for (int i = 0; i < 6; i++)
    {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
    printf("\n\n\n\n");
}
