#include <stdio.h>

int main(int argc, char const *argv[])
{
    int b[2][3] = {2, 3, 6, 4, 5, 8};
    // printf("b or &b[0] = %d or %d\n", b, &b[0]);
    // printf("*b or b[0] or  &b[0][0] = %d or %d or %d", *b, b[0], &b[0][0]); //Return first value's address of 1D array
    // printf("%d\n", &b[0]);
    // printf("%d\n", b[0]);
    // printf("%d\n", b);
    // printf("%d\n", *b);
    // printf("%d\n", b);
    // printf("%d\n", b[2]);
    // printf("%d\n", **b);
    // printf("%d\n", *b[0]);
    // printf("%d\n", *&b[0][0]);
    // printf("%d\n", **(b + 0));
    // printf("%d\n", *(*(b + 1) + 2));
    printf("%d\n", *b);
    printf("%d\n", *(b + 0));

    // printf("%d\n", (b + 1));
    // printf("%d\n", **(b + 1));
    // printf("%d\n", *(b[0] + 1));

    return 0;
}
