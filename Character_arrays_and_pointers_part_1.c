#include <stdio.h>
#include <string.h>

void print(char *c)
{
    int i = 0;
    while (c[i] != '\0')
    {
        printf("%c", c[i]);
        i++;
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    char c[20] = "Hello";
    printf(c);
}
