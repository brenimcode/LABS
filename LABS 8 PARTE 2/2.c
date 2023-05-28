#include <stdio.h>

int main()
{
    float mat[3][3];
    int i;
    for (i = 0; i < 9; i++)
    {
        printf("%p\n", (mat + i));
    }
    return 0;
}