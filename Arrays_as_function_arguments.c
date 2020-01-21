// Arrays as function argument
// In Arrays there is no call be value there is always call by reference
#include <stdio.h>

void Double(int *A, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        A[i] = 2 * A[i];
    }
}
int main(int argc, char const *argv[])
{
    int a[] = {2, 4, 6, 8, 9};
    int size = sizeof(a) / sizeof(a[0]);
    Double(a, size);
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
