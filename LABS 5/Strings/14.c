#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[50],str2[50];
    setbuf(stdin,NULL);
    gets(str1);
    int n;
    scanf("%i",&n);
    setbuf(stdin,NULL);
    fgets(str2,n,stdin);
    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}
