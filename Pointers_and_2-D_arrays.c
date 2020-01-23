#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    printf("%d\n", *(a + 1) + 2);
    printf("%d\n", a[1] + 2);
    printf("%d", &a[1][2]);

    return 0;
}
