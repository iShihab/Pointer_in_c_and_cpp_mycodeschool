#include <stdio.h>
#include <string.h>

void printChar(char *a)
{
    int i = 0;
    while (*a != '\0')
    {
        printf("%c", *a); //Dereferancing the adresss a[i]
        a++;
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    char c[20] = "Shihab";
    printChar(c);
}
