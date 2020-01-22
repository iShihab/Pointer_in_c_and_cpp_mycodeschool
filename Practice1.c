#include <stdio.h>
#include <string.h>

void printChar(char *a)
{
    int i = 0;
    while (a[i] != '\0')
    {
        printf("%c", *(a + i)); //Dereferancing the adresss a[i]
        i++;
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    char c[20] = "Shihab";
    printChar(c);
}
