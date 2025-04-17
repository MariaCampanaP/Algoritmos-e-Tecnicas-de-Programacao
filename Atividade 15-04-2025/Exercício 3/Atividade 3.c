/* Faça um algoritmo que leia dois números nas variáveis NumA e NumB, nessa ordem, e imprima em ordem inversa, isto é, se os dados lidos forem NumA = 5 e NumB = 9, por exemplo, devem ser impressos na ordem NumA = 9 e NumB = 5 */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int NumA;
    int NumB;
    int Aux;

    printf("Digite o primeiro numero (NumA):");
    scanf("%d", &NumA);

    printf("Digite o segundo numero (NumB):");
    scanf("%d", &NumB);

    Aux = NumA;
    NumA = NumB;
    NumB = Aux;

    printf("\n\n---Valores Trocados---\n\n");
    printf("NumA = %d\n", NumA);
    printf("NumB = %d\n", NumB);

    return 0;

}
