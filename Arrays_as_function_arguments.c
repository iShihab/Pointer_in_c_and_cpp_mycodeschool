// Arrays as function argument
#include <stdio.h>

void printSum(int x[], int s)
{
    int i, sum = 0;
    for (i = 0; i < s; i++)
    {
        sum = sum + x[i];
    }
    printf("Sum = %d", sum);
}

int main(int argc, char const *argv[])
{
    int a[] = {2, 4, 6, 8, 9};
    int size = sizeof(a) / sizeof(a[0]); //sizeof(a) return whole size of array a which is 20
    //to get the total element in the array a
    // size =sizeof(a)20/sizeofanyelement of the array(a[3])4=5
    //size =20/4=5

    printSum(a, size);
    return 0;
}
