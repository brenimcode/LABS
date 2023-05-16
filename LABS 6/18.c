#include <stdio.h>
int validar(char code){
    //validacao de codigo de aeroporto que depende da quantidade de aeroportos, este possui 5:
    if (code == '0' || code == '1' || code == '2' || code == '3' || code == '4')
    {
        return 0;
    }
    else{
        return 1;
    }
}
struct voos{
    char origem;
    char destino;
};
struct aeroportos{
    char codigo;
    int saem;
    int chegam;
};
int main(){
    int i;
    struct voos voo[5];
    for (i = 0; i < 5; i++)
    {
        do
        {
            printf("Digite o codigo de origem de %d':\n",i+1);
            setbuf(stdin,NULL);
        voo[i].origem = getchar();
        if (validar(voo[i].origem))
        {
            printf("CODIGO INVALIDADO!!\n");
        }
        
        } while (validar(voo[i].origem));
        do
        {
        printf("Digite o codigo de destino de %d':\n",i+1);
        setbuf(stdin,NULL);
        voo[i].destino = getchar();
        if (validar(voo[i].destino))
        {
            printf("CODIGO INVALIDADO!.\n");
        }
        
        } while (validar(voo[i].destino));
    }

    struct aeroportos aeroporto[5];
    for (i = 0; i < 5; i++)
    {
        do
        {
           printf("Digite o codigo do aeroporto %d",i+1);
        setbuf(stdin,NULL);
        aeroporto[i].codigo = getchar();
        if (validar(aeroporto[i].codigo))
        {
            printf("CODIGO INVALIDADO!.\n");
        }
        
        } while (validar(aeroporto[i].codigo));

        printf("Quantidade de voos que chegam:\n");
        scanf("%d",&aeroporto[i].chegam);
        printf("Quantidade de voos que saem:\n");
        scanf("%d",&aeroporto[i].saem);
    }
    return 0;
}