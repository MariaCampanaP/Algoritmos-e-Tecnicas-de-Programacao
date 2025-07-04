/* Crie um programa que leia um vetor vet contendo 18 elementos. A seguir, o programa deverá
distribuir ordenadamente esses elementos em uma matriz 3 x 6, e no final, mostrar a matriz*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int vet[18];
    int m[3][6];
    int k = 0; //índice para percorrer o vetor

    printf("Digite 18 elementos:\n");
    for(int i = 0; i < 18; i++){
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 6; j++){
            m[i][j] = vet[k];
            k++; //Usa o valor atual de k, depois incrementa k em 1
        }
    }

    printf("\nMatriz 3x6 formada\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 6; j++){
            printf("%d ", m[i][j]);
        }

        printf("\n");
    }

    return 0;

}
