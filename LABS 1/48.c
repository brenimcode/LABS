#include <stdio.h>

int main()
{
    // Ler um valor inteiro em segundos e imprimi-lo em horas, minutos e segundos, 48.
    printf("Digite um valor em segundos: \n");
    int seg;
    scanf("%i", &seg);
    int h = seg/3600;
    int min =  (seg / 60) - (h*60);
    int s =  seg - (h*3600) - (min*60);
    printf("\nHoras:%i \nminutos:%i \nsegundos:%i \n",h,min,s);

        return 0;
}