// For address--- &A[i] or (A+i)
// For value--- A[i] or *(A+i)

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[] = {2, 4, 5, 8, 1};
    int i;
    int *p = A;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", &A[i]);
        printf("%d\n", A + i);
        printf("%d\n", A[i]);
        printf("%d\n", *(A + i));
    }

    return 0;
}
