#include <stdio.h>

void printArray(int *a, int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        printf("%d\n", *(a + i));
    }
}

int main(int argc, char const *argv[])
{
    int a[5] = {2, 4, 6, 8, 10};
    int s = sizeof(a) / sizeof(a[1]);
    printArray(a, s);

    return 0;
}
