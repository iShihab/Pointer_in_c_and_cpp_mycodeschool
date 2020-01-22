#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char c[] = "SAJED";
    int len = strlen(c);
    printf("Size in bytes = %d\n", sizeof(c));
    printf("Length = %d\n", len);
    return 0;
}
