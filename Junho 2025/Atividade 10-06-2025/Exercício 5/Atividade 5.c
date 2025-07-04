/* Fa�a um programa que preencha um vetor com os registros acad�micos (RA) de sete
alunos e carregue outro vetor com a m�dia final desses alunos. Calcule e mostre:
--> O RA do aluno com maior m�dia(desconsiderar empates);
--> Para cada aluno n�o aprovado, isto �, com m�dia menor que 7, mostrar quanto esse
aluno precisa tirar na prova de exame final para ser aprovado. Considerar que a m�dia
para aprova��o no exame � 5 */

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
