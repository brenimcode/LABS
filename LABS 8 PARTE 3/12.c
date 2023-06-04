#include <stdio.h>
void maximo(int *v, int n, int *min, int *max)
{
    int i;
    *min = *(v);
    *max = *(v);
    for (i = 0; i < n; i++)
    {
        if (*min > *(v + i))
        {
            *min = *(v + i);
        }
        if (*max < *(v + i))
        {
            *max = *(v + i);
        }
    }
}
int main()
{
    int v, min, max, i;
    printf("--- Insira V ---\n");
    scanf("%d", &v);
    int array[v];
    printf("Insira elementos do array: \n");
    for (i = 0; i < v; i++)
    {
        scanf("%d",array+i);
    }
    maximo(array, v, &min, &max);
    printf("MAX: [%d]\nMIN: %d\n", max, min);
    return 0;
}