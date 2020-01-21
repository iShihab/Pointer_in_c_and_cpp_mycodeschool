#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 5;
    int *p = &x;
    *p = 6;        //p storing an address of value 6,thats why its a single star
    int **q = &p;  //p is already a pointer and q itself a pointer so **q
    int ***r = &q; // q is a pointer and its pointing p which also a pointer and r itself a pointer so ***r
    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", *(*q));
    printf("%d\n", **r);
    printf("%d\n", *(*(*r)));

    return 0;
}
