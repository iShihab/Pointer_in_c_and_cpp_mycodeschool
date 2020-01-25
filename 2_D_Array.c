#include <stdio.h>

int main(int argc, char const *argv[])
{
    int twoDArray[2][3] = {1, 2, 3, 4, 5, 6}; //two one dimensional array with three elements each
    int(*p)[3] = twoDArray;
    printf("Output of p[0]: %d\n ", *p[0]);

    return 0;
}
