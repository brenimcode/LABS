#include <stdio.h>
const float pi = 3.14159265359;

void calc_esfera(float R, float *area, float *volume){
    *area = R*R*pi;
    *volume = (4*pi*R*R*R)/3;
}

int main(){
    float raio,area,volume;
    scanf("%f",&raio);
    calc_esfera(raio,&area,&volume);
    printf("Raio: %.2f\nArea: %.2f\nVolume: %.2f\n",raio,area,volume);
    return 0;
}