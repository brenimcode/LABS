#include <stdio.h>

int main()
{
    //digite a altura do degrau e altura da escada.

    printf("Digite a altura do degrau e a altura da escada, nessa ordem: \n");
    float degrau;
    float escada;
    scanf("%f%f",&degrau,&escada);
    float div = escada/degrau; 
    printf("Tera que subir %.2f degraus para alcancar o final.",div);
    return 0;
}
