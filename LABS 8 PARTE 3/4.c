#include <stdio.h>
int ordenar(int *p1,int *p2,int *p3){
    int aux0,aux1;
    if(*p1 == *p2 && *p2 == *p3){
        return 1;
    }

    if(*p1 > *p2 && *p2 > *p3){
        // p1>p2>p3
        aux0 = *p3;
        *p3 = *p1;
        *p1 = aux0;
    }
    else if(*p2 > *p1 && *p1 > *p3){
        // p2 > p1 > p3
        aux0 = *p1;
        *p2 = *p1;
        *p2 = aux0;
    }
    else if(*p2 > *p3 && *p3 > *p1){
        // p2>p3>p1
         aux0 = *p2;
         aux1 = *p3;
        *p2 = *p1;
        *p3 = aux0;
        *p2 = aux1;
    }
    else if(*p3 > *p1 && *p1 > *p2){
        // p3>p1>p2
         aux0 = *p2;
        *p2 = *p1;
        *p1 = aux0;
    }
    else if(*p1 > *p3 && *p3 > *p2){
        // p1 > p3 > p2
        aux0 = *p3;
        *p3 = *p1;
        *p1 = aux0;
        // p3>p1>p2
        aux1=*p2;
        *p2 = *p1;
        *p1 = aux1;
    }
    return 0;
}

int main(){
    // o maior: p3 > p2 > p1
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    ordenar(&a,&b,&c);
    printf("Ordem: [%d] [%d] [%d]\n",a,b,c);
    return 0;
}