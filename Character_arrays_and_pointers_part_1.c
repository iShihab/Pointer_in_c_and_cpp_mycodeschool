#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char c[8];
    c[0] = 'S';
    c[1] = 'A';
    c[2] = 'J';
    c[3] = 'E';
    c[4] = 'D';
    c[5] = '\0';
    int len = strlen(c);
    printf("Length = %d\n", len);
    return 0;
}
