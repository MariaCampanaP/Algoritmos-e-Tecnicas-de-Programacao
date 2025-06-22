/* Faça um programa que leia as notas nas duas provas que um aluno fez. Calcule e mostre a média aritmética das notas*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota1;
    float nota2;
    float media;

    printf("---Notas do aluno---\n\n");

    printf("Digite a primeira nota:");
    scanf("%f", &nota1);

    printf("Digite a segunda nota:");
    scanf("%f", &nota2);

    printf("\n\n---Media---\n\n");

    media = (nota1 + nota2) / 2;

    printf("A media do aluno eh:%.2f\n", media);

    return 0;

}
