#include <stdio.h>

void Increment(int *p)
{
    *p = (*p) + 1;
}

int main(int argc, char const *argv[])
{
    int a;
    a = 10;
    Increment(&a);
    printf("a = %d", a);

    return 0;
}
