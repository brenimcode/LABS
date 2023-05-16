#include <stdio.h>
#include <string.h>
struct aluno
{
  char nome[100];
  int numero_matricula;
  char curso[50];
};
int main()
{
  struct aluno a[5];
  int i;
  for (i = 0; i < 5; i++)
  {
    setbuf(stdin, NULL);
    gets(a[i].nome);
    scanf("%i", &a[i].numero_matricula);
    setbuf(stdin, NULL);
    gets(a[i].curso);
  }
  for (i = 0; i < 5; i++)
  {
    printf("\nNOME: %s\nNUMERO DE MATRICULA: %i\nCURSO: %s\n", a[i].nome,a[i].numero_matricula,a[i].curso);
  }
  return 0;
}