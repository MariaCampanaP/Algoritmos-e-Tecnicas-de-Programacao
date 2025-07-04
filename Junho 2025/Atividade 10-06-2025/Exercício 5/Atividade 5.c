/* Faça um programa que preencha um vetor com os registros acadêmicos (RA) de sete
alunos e carregue outro vetor com a média final desses alunos. Calcule e mostre:
--> O RA do aluno com maior média(desconsiderar empates);
--> Para cada aluno não aprovado, isto é, com média menor que 7, mostrar quanto esse
aluno precisa tirar na prova de exame final para ser aprovado. Considerar que a média
para aprovação no exame é 5 */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int RA[7];
    float media[7];

    for(int i = 0; i < 7; i++){
        printf("Digite o RA do aluno %d:", i + 1);
        scanf("%d", &RA[i]);

        printf("Digite a media final do aluno %d:", i + 1);
        scanf("%f", &media[i]);
    }

    float maiorMedia = media[0];
    int indiceMaior = 0;

    for(int i = 1; i < 7; i++){
        if(media[i] > maiorMedia){
            maiorMedia = media[i];
            indiceMaior = i;
        }

        printf("\nRA do aluno com a maior media:%d (media = %.2f)\n", RA[indiceMaior], maiorMedia);

    }

    for(int i = 0; i < 7; i++){
        if(media[i] < 7){
            float notaExame = 10 - media[i];
            printf("\nAluno RA %d precisa tirar %.2f na prova final para ser aprovado\n", RA[i], notaExame);
        }
    }

    return 0;

}
