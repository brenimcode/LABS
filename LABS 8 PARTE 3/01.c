#include <stdio.h>
void trocar(int *p1,int *p2){
    int aux;
    aux = *p1;
    *p1 = *p2;
    *p2 = aux;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("--- ANTES ---\n");
    printf("[%d] [%d]\n",a,b);
    trocar(&a,&b);
    printf("--- DEPOIS ---\n");
    printf("[%d] [%d]",a,b);
    return 0;
}