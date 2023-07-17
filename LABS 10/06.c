#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char texto[100];
    fp = fopen("ex06.txt","w");
    if(fp == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    fgets(texto,100,stdin);
    fprintf(fp,"%s",texto);
    fclose(fp);
    fp = fopen("ex06.txt","r");
    if(fp == NULL){
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }
    printf("\nA: [%d]");
    printf("\nB: [%d]");
    printf("\nC: [%d]");
    printf("\nD: [%d]");
    printf("\nE: [%d]");
    printf("\nF: [%d]");
    printf("\nG: [%d]");
    printf("\nH: [%d]");
    printf("\nI: [%d]");
    printf("\nJ: [%d]");
    printf("\nK: [%d]");
    printf("\nL: [%d]");
    printf("\nN: [%d]");
    printf("\nM: [%d]");
    printf("\nO: [%d]");
    printf("\nP: [%d]");
    printf("\nQ: [%d]");
    printf("\nR: [%d]");
    printf("\nS: [%d]");
    printf("\nT: [%d]");
    printf("\nU: [%d]");
    printf("\nV: [%d]");
    printf("\nW: [%d]");
    printf("\nX: [%d]");
    printf("\nY: [%d]");
    printf("\nZ: [%d]");
    fclose(fp);

    return 0;
}