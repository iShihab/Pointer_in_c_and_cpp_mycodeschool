// Arrays as function argument
// In Arrays there is no call be value there is always call by reference
#include <stdio.h>

void printSum(int x[])
{
    int i, sum = 0;
    int s = sizeof(x) / sizeof(x[0]);
    for (i = 0; i < s; i++)
    {
        sum = sum + x[i];
    }
    printf("Sum = %d", sum);
}

int main(int argc, char const *argv[])
{
    int a[] = {2, 4, 6, 8, 9};
    printSum(a);
    return 0;
}
