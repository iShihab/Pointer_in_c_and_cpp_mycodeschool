#include <stdio.h>

int main(int argc, char const *argv[])
{
    int OneDArray[] = {2, 4, 6, 8, 10};
    int *p = OneDArray;
    printf("Output for p: %d\n", p);
    printf("Output for *p: %d\n", *p);
    printf("Output for p+1: %d\n", p + 1);
    printf("Output for *(p+1): %d\n", *(p + 1));
    printf("Output for p[0]: %d\n", p[0]);
    printf("Output for *p+1: %d\n", *p + 1);
    return 0;
}
