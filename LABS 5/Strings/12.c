#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//codificação de strings

int main(){
    char string[100];
    setbuf(stdin,NULL);
    gets(string);
    int length = strlen(string);
    for (int i = 0; i < length; i++)
    {
        if ((string[i] > 96 && string[i] < 123) || (string[i] > 65 && string[i] < 90) )
        {
            //Condicional para realizar a soma de 3 apenas em letras.
            string[i] +=3;
        }
    }
    printf("%s",string);
    return 0;
}
