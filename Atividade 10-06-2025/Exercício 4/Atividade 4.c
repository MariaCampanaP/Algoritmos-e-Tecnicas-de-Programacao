/* Fa�a um programa que preencha um vetor com seis elementos num�ricos inteiros. Calcule
e mostre:
--> todos os n�meros pares;
--> a quantidade de n�meros pares;
--> todos os n�meros �mpares;
--> a quantidade de n�meros �mpares
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[6];
    int pares[6];
    int impares[6];
    int qtdPares = 0;
    int qtdImpares = 0;

    printf("Digite 6 numeros inteiros\n");
    for(int i = 0; i < 6; i++){
        printf("Numero %d:", i + 1);
        scanf("%d", &vetor[i]);

    if(vetor[i] % 2 == 0){
        pares[qtdPares] = vetor[i];
        qtdPares++;
    }else{
        impares[qtdImpares] = vetor[i];
        qtdImpares++;
    }
}

    printf("\nNumeros Pares\n");
    for(int i = 0; i < qtdPares; i++){
        printf("%d", pares[i]);
    }

    printf("\nQuantidade de numeros pares:%d\n", qtdPares);

    printf("\nNumeros Impares\n");
    for(int i = 0; i < qtdImpares; i++){
        printf("%d", impares[i]);
    }

    printf("\nQuantidade de numeros impares:%d\n", qtdImpares);

    return 0;

}
