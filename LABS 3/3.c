#include <stdio.h>

int main(){
    /* Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na 
    tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a contagem*/
    int valor = 10;
    while (valor >=0)
    {
        printf("%i ",valor);
        valor--;
    }
    printf("FIM!");
    
    return 0;
}