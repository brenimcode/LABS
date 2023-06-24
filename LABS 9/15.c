#include <stdio.h>
#include <stdlib.h>

void sort(int *vetVal, int *veti, int *vetj, int m, int n);

int main(){
    int m, n, **a, *vetori, *vetorj, *vetorValores, pos = 0;
    printf("Insira as dimensoes (MxN) da matriz A: ");
    scanf("%d %d", &m, &n);

    if((vetori = (int *)calloc(m*n, sizeof(int ))) == NULL){
        printf("Erro ao alocar memoria");
        exit(1);
    }

    if((vetorj = (int *)calloc(m*n, sizeof(int ))) == NULL){
        printf("Erro ao alocar memoria");
        exit(1);
    }

    if((vetorValores = (int *)calloc(m*n, sizeof(int ))) == NULL){
        printf("Erro ao alocar memoria");
        exit(1);
    }
    
    if((a = (int **)calloc(m, sizeof(int *))) == NULL){
        printf("Erro ao alocar memoria");
        exit(1);
    }

    for(int i = 0; i < n; i++){
        if((a[i] = (int *)calloc(n, sizeof(int))) == NULL){
            printf("Erro ao alocar memoria");
            exit(1);
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++, pos++){
            printf("Insira a[%d][%d]: ",i,j);
            scanf("%d", &a[i][j]);
            vetorValores[pos] = a[i][j]; 
            vetori[pos] = i;
            vetorj[pos] = j;
        }
    }

    sort(vetorValores, vetori, vetorj, m, n);

    for(int i = (m*n)-1; i > ((m*n)-1)-3; i--){
        printf("A[%d][%d] = %d\n", vetori[i], vetorj[i], vetorValores[i]);
    }
    
    return 0;
}

void sort(int *vetVal, int *veti, int *vetj, int m, int n){
    int i, key, j;
    int mn = m*n;
    for (i = 1; i < mn; i++) {
        key = vetVal[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && vetVal[j] > key) {
            vetVal[j + 1] = vetVal[j];
            veti[j + 1] = veti[j];
            vetj[j + 1] = vetj[j];
            j = j - 1;
        }
        vetVal[j + 1] = key;
    }
}