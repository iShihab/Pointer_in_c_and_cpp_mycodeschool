// For address--- &A[i] or (A+i)
// For value--- A[i] or *(A+i)

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A[] = {2, 4, 5, 8, 1};
    printf("%d\n", A);
    printf("%d\n", &A[0]);
    printf("%d\n", A[0]);
    printf("%d\n", *A);
    return 0;
}
