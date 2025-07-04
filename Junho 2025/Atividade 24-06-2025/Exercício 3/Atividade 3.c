/* Implemente um programa que receba números para uma matriz A 3 x 4. Apresente como saída
uma matriz B, em que os elementos são resultantes dos seguintes cálculos:
-> Os números ímpares da matriz A devem ser multiplicados por 3.
-> Os números pares da matriz A devem ser multiplicados por 2.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int A [3][4];
    int B [3][4];
    int i, j;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            if(A[i][j] % 2 == 0){
                B[i][j] = A[i][j] * 2;
            }else{
                B[i][j] = A[i][j] * 3;
            }
        }
    }

    printf("\n\nMatriz B\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            printf("%d ", B[i][j]);
        }
    }

    return 0;
}
