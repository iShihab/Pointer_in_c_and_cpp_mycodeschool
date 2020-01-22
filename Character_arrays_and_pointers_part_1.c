#include <stdio.h>
#include <string.h>

void print(char *c)
{
    int i = 0;
    while (*c != '\0')
    {
        printf("%c", *c);
        c++;
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    char c[20] = "Hello";
    printf(c);
}
