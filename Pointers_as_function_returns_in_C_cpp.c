#include <stdio.h>
#include <stdlib.h>

//bad practice
int *Add(int *a, int *b)
{
    //bad practice
    int c = (*a) + (*b);
    return &c;
}

int main()
{
    int a = 2, b = 4;
    int *ptr = Add(&a, &b);
    printf("Sum = %d\n", *ptr);
}