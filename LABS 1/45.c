#include <stdio.h>

int main()
{
    //converter letra maiuscula em letra minuscula
    printf("Digite uma letra maiuscula: \n");
    char a;
    scanf("%c", &a);
    char convert = a+32;
    printf("Sua letra minuscula: %c",convert);

    return 0;
}
