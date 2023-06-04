#include <stdio.h>
void maior(int *p1,int *p2){
    int aux;
    if(*p1 < *p2){
        aux = *p1;
        *p1 = *p2;
        *p2 = aux;
    }
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    maior(&a,&b);
    printf("\nMaior [%d]\nMenor [%d]\n",a,b);
    return 0;
}
