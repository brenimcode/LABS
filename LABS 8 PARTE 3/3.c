#include <stdio.h>
void soma(int *p1,int *p2){
    *p1 = (*p1) + (*p2);
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    soma(&a,&b);
    printf("Soma: [%d]\n",a);
    return 0;
}