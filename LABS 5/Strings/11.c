#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char S[100];
    int i,j;
    setbuf(stdin,NULL);
    fgets(S,10,stdin);
    scanf("%i%i",&i,&j);
    if (i < 0 || j<0)
    {
        printf("erro");
        return 0;
    }
    while (i < j)
    {
        printf("%c",S[i]);
        i++;
    }
    return 0;
}
