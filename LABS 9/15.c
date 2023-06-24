#include <stdio.h>
#include <stdlib.h>

int main(){
    int **mat,n,m,i,j,one,two,three,i1,i2,i3,j1,j2,j3;
    printf("Insira linhas: ");
    scanf("%d",&m);
    printf("Insira colunas: ");
    scanf("%d",&n);
    mat = (int**) malloc(m*sizeof(int*));
    for(i=0;i<n;i++){
        mat[i] = (int *)malloc(n*sizeof(int));
    }
    // Eu limpo todas as colunas depois eu limpo todas as linhas
    for(i=0;i<m;i++){
        for (j = 0; j < n; j++)
        {
            printf("Insira mat[%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    // ver os 3 maiores numeros
    one = mat[0][0];
    two = mat[0][0];
    three = mat[0][0];
    for(i=0;i<m;i++){
        for (j = 0; j < n; j++)
        {
            if(one < mat[i][j]){
                one = mat[i][j];
                i1 = i;
                j1 = j;
            }
        }
    }

    for(i=0;i<m;i++){
        for (j = 0; j < n; j++)
        {
            if(two < mat[i][j] && mat[i][j]<=one){
                two = mat[i][j];
                i2 = i;
                j2 = j;
            }  
        }
    }
    /*
    for(i=0;i<m;i++){
        for (j = 0; j < n; j++)
        {
            if(three < mat[i][j] && three <=two){
                three = mat[i][j];
                i2 = i;
                j2 = j;
            }  
        }
    }*/
    printf("{%d}\n",one);
    printf("{%d}\n",two);
    printf("{%d}\n",three);
    return 0;
}