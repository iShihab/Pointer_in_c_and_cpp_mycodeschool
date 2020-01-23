#include <stdio.h>

int main(int argc, char const *argv[])
{
    int b[2][3] = {1, 2, 3, 4, 5, 6};
    printf("%d", *(*b + 1));
    printf("\n%d", **(b + 1));

    return 0;
}
