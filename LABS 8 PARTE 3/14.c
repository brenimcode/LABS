#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2){
    float delta = ((B*B)-4*A*C);
    float raiz_delta = sqrt(delta);
    if(delta < 0){
        // sem raiz real
        return 0;
    }
    *X1 = (-B+raiz_delta)/2*A;
    *X2 = (-B-raiz_delta)/2*A;
    if(delta == 0){
        // 1 raiz
        return 1;
    }
    else if(delta > 0){
        // 2 raizes reais
        return 2;
    }
}

int main(){
    float a,b,c,x1,x2,num;
    printf("Digite A,B,C:\n");
    scanf("%f%f%f",&a,&b,&c);
    num = raizes(a,b,c,&x1,&x2);
    printf("Numero de raizes >> %.2f\nRaizes >> x1[%.2f], x2[%.2f]\n",num,x1,x2);
    return 0;
}