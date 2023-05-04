#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[100];
    setbuf(stdin,NULL);
    gets(string);
    int tam = strlen(string);
    int f = tam - 1;
    for (int i = 0; i <= tam; i++)
    {
        if (string[i] == string[f])
        {
             f--;
        }
       else if(string[i] != string[f]){
        printf("Nao eh palindromo.");
        return 0;
       }
    }
    printf("Palindromo.");
    
    return 0;
}
