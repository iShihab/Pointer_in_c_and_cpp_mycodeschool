#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0, j = 0;
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
