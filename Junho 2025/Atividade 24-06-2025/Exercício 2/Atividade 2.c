/* Implemente um programa que carregue uma matriz A 2 x 2. Em seguida, o maior número da matriz
deve ser encontrado. Por fim, uma matriz B deve ser apresentada, com os elementos sendo resultantes do seguinte cálculo:

-> Elemento da matriz A * Maior elemento da matriz A*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int A [2][2];
    int B [2][2];
    int i, j;
    int maior;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nMaior elemento da matriz A\n");
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            if(A[i][j] > maior){
                maior = A[i][j];
            }
        }
    }

    printf("%d", maior);

    printf("\n\nMatriz B\n");

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            B[i][j] = A[i][j] * maior;
            printf("%d ", B[i][j]);
        }
    }

    return 0;
}
