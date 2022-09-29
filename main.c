#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char nome[100];
  int matricula;
  float n1, n2;
  float media;
} dados;
int main(void) {
  int quantidade_alunos;
  dados dado[200];
  printf("Quantos alunos? \n");
  scanf("%i", &quantidade_alunos);
  setbuf(stdin, NULL);
  for (int i = 0; i < quantidade_alunos; i++) {
    printf("Digite seu nome:\n");
    fgets(dado[i].nome, 100, stdin);
    setbuf(stdin, NULL);
    printf("Digite sua matricula:\n");
    setbuf(stdin, NULL);
    scanf("%d", &dado[i].matricula);
    printf("Digite suas duas notas:\n");
    setbuf(stdin, NULL);
    scanf("%f %f", &dado[i].n1, &dado[i].n2);
    dado[i].media = (dado[i].n1 + dado[i].n2) / 2;
    printf("Matricula: %i \n", dado[i].matricula);
    printf("Nome: %s", dado[i].nome);
    printf("Media: %f \n", dado[i].media);
  }
}