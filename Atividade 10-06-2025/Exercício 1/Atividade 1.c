/*Fa�a um programa que preencha um vetor com nove n�meros inteiros, calcule e mostre os n�meros pares e suas respectivas posi��es no vetor (ind�ce)*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int vet[9];

    for(i = 0; i < 9; i++){
        printf("Digite o %d numero inteiro:", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("\n--- Numeros pares e suas posicoes no vetor ---\n");
    for(i = 0; i < 9; i++){
        if(vet[i] % 2 == 0){
            printf("Numero par %d encontrado na posicao %d\n", vet[i], i);
        }
    }

    return 0;
}
