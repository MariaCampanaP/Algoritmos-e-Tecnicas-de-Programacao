/* Fa�a um programa que receba o n�mero sorteado por um dado de seis lados jogado vinte
vezes. Mostre os n�meros sorteados e a frequ�ncia com que apareceram */

#include <stdio.h>
#include <stdlib.h>

int main(){

    int dado[20];
    int freq[6];

    //Inicializa o vetor de frequ�ncia com zeros
    for(int i = 0; i < 6; i++){
        freq[i] = 0;
    }

    //Leitura dos 20 n�meros sorteados. dado[i] vai receber o valor digitado pelo usu�rio
    for(int i = 0; i < 20; i++){
        printf("Digite o numero sorteado na jogada %d (de 1 a 6):", i + 1);
        scanf("%d", &dado[i]);

        //Mapeamento dos n�meros de 1 a 6 nas posi��es 0 a 5 do vetor freq
        freq[dado[i] -1]++;
    }

    //Mostra todos os n�meros digitados pelo usu�rio, na ordem em que foram inseridos
    printf("\nNumeros sorteados\n");
    for(int i = 0; i < 20; i++){
        printf("%d ", dado[i]);
    }

    printf("\n");

    /*Esse bloco mostra quantas vezes cada n�mero de 1 a 6 apareceu
    i + 1: porque os �ndices v�o de 0 a 5
    freq[i]: mostra quantas vezes esse n�mero foi sorteado*/
    printf("\nFrequencia dos numeros\n");
    for(int i = 0; i < 6; i++){
        printf("Numero %d: %d vezes\n", i + 1, freq[i]);
    }

    return 0;
}
