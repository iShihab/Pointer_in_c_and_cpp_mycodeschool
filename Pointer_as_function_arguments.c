#include <stdio.h>

void Increment(int a)
{
    a = a + 1;
    printf("a = %d", a);
}

int main(int argc, char const *argv[])
{
    int a;
    a = 10;
    Increment(a);

    return 0;
}
