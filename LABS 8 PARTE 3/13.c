#include <stdio.h>
void notas(float *nota1,float *nota2,float *media,float *pond){
    scanf("%f",nota1);
    scanf("%f",nota2);
    *media = (*(nota1)+*(nota2))/2;
    *pond = (*(nota1)+(*(nota2))*2)/3;

}
int main(){
    float n1,n2,media,ponderada;
    notas(&n1,&n2,&media,&ponderada);
    printf("Media >> (%.2f)\nMedia Ponderada >> (%.2f)\n",media,ponderada);
    return 0;
}