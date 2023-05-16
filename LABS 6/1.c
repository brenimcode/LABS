#include <stdio.h>
struct compromisso
{
    int horario[3];
    int data[3];
    char texto[100];
};
int main()
{
    struct compromisso a;
    int i;
    printf("Digite o horario: na ordem de HORAS,MINUTOS,SEGUNDOS\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%i", &a.horario[i]); // ler a posicao 0(Horas),Posicao 1(minutos),posicao 2(segundos)
                                    // ler dia mes e ano
    }
    printf("\nDigite a data: na ordem de DIA,MES,ANO\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%i", &a.data[i]);
        // ler dia mes e ano
    }
    printf("\nTexto: ");
    setbuf(stdin,NULL);
    gets(a.texto);
    printf("\nCompromisso:\nHORARIO: %ih:%imin:%iseg\nDATA:%i/%i/%i\n%s",a.horario[0],a.horario[1],a.horario[2],a.data[0],a.data[1],a.data[2],a.texto);
    return 0;
}