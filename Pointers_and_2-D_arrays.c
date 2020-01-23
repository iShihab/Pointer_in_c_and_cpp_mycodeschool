#include <stdio.h>

void printArray(int *b)
{
}

int main(int argc, char const *argv[])
{
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    // printArray(a);
    printf("%d", *(a + 1));

    return 0;
}
