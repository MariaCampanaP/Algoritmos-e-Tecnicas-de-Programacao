/* Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética
das notas e a mensagem de aprovado ou reprovado, considerando para aprovação média 7 */

#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota1, nota2, nota3, nota4;
    float media;

    printf("Digite 4 notas de um aluno:");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (media >= 7){
        printf("Media:%.2f\n", media);
        printf("Aprovado!");
    }else{
        printf("Media:%.2f\n", media);
        printf("Reprovado!");
    }

    return 0;

}
