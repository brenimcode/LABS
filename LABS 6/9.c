#include <stdio.h>
#include <math.h> //usar funçoes matematicas
struct complexo{
    float real;
    float imaginario;
};
int main(){
    //operacao com numero complexo:
    struct complexo z;
    printf("Digite a parte real do numero complexo Z:\n");
    scanf("%f",&z.real);
    printf("Digite a parte imaginaria do numero complexo Z:\n");
    scanf("%f",&z.imaginario);
    struct complexo w;
    printf("Digite a parte real do numero complexo W:\n");
    scanf("%f",&w.real);
    printf("Digite a parte imaginaria do numero complexo W:\n");
    scanf("%f",&w.imaginario);
    struct complexo op[3];
    //Soma
    op[0].real = z.real+w.real;
    op[0].imaginario = z.imaginario+w.imaginario;
    // Subtracao
    op[1].real = z.real-w.real;
    op[1].imaginario = z.imaginario-w.imaginario;
    // Produto
    op[2].real = (z.real*w.real) - (z.imaginario*w.imaginario);
    op[2].imaginario = (z.imaginario*w.real) + (w.imaginario*z.real);
    // Modulo
    float moduloz = sqrt((z.real*z.real)+(z.imaginario*z.imaginario));
    float modulow = sqrt((w.real*w.real)+(w.imaginario*w.imaginario));
    printf("A SOMA dos COMPLEXOS: %.2f + %.2fi\n",op[0].real,op[0].imaginario);
    printf("A SUBTRACAO dos COMPLEXOS: %.2f + %.2fi\n",op[1].real,op[1].imaginario);
    printf("O PRODUTO dos COMPLEXOS: %.2f + %.2fi\n",op[2].real,op[2].imaginario);
    printf("O MODULO dos COMPLEXOS: Z=%.2f e W=%.2f\n",moduloz,modulow);
    return 0;
}