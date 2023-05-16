#include <stdio.h>
struct vetor {
    float a;
    float b;
    float c;
};
int main(){
    // para fazer a soma de vetores: usa-se o vetor x e o y com cord(a,b,c)
    struct vetor x; 
    printf("\nDigite coordenada a de vetor(x):\n");
    scanf("%f",&x.a);
    printf("Digite coordenada b de vetor(x):\n");
    scanf("%f",&x.b);
    printf("Digite coordenada c de vetor(x):\n");
    scanf("%f",&x.c);
    struct vetor y;
    printf("\nDigite coordenada a de vetor(y):\n");
    scanf("%f",&y.a);
    printf("Digite coordenada b de vetor(y) :\n");
    scanf("%f",&y.b);
    printf("Digite coordenada c de vetor(y) :\n");
    scanf("%f",&y.c);
    struct vetor z;
    z.a = x.a + y.a;
    z.b = x.b + y.b;
    z.c = x.c + y.c;
    printf("Vetor resultante: Z = (%.1f,%.1f,%.1f)",z.a,z.b,z.c);
    return 0;
}