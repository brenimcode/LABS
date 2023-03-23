#include <stdio.h>

int main()
{
    /* Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em
    segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora,
    minuto e segundo) do termino da mesma */
    printf("Digite a hora de inicio, horas, minutos e segundos, nessa ordem: \n");
    int inicioh;
    int iniciom;
    int inicios;
    scanf("%i%i%i", &inicioh, &iniciom, &inicios); // Ler os valores da hora de inicio
    printf("Digite a duracao da experiencia em segundos: ");
    int duracao;
    scanf("%i", &duracao); // Ler a duração em segundos

    // Contas e calculos:
    int seg = (inicioh * 3600 + iniciom * 60) + inicios + duracao;

    int final_hora = (seg / 3600) % 24;
    int final_min = (seg % 3600) / 60;
    int final_seg = seg % 60;
    int dias = (seg / 3600) / 24;
    printf("Hora de termino: %ih \nMinutos do termino: %imin \nSegundos do termino: %iseg \n Dias decorridos: %i dias", final_hora, final_min, final_seg, dias);

    return 0;
}
