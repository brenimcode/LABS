#include <stdio.h>
#include <string.h> // manipular cadeia de caracteres
int main()
{
    char string1[100];
    char string2[100];
    int i, j=0, len1, ver = 0, len2;
    setbuf(stdin, NULL);
    fgets(string1, 100, stdin);
    setbuf(stdin, NULL);
    fgets(string2, 100, stdin);
    len1 = strlen(string1);
    len2 = strlen(string2);
    
    // ver == len2 contida; else nao contida
    for (i = 0; i < len2; i++)
    {
        while (j < len1)
        {
            if (*(string2+i) == *(string1+j))
            {
                ver++;
                j++;
                break;
            }
            j++;
        }
    }
    if(ver == len2){
        printf("-- Esta contida. --");
    }
    else{
        printf("-- Nao esta contida. --");
    }

    return 0;
}