/* Fa�a um programa que receba dez n�meros, calcule e mostre a soma dos n�meros pares e o produto dos n�meros �mpare*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    int somaPares = 0;
    int produtoImpares = 1;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            somaPares += num;  // soma n�meros pares
        } else {
            produtoImpares *= num;  // multiplica n�meros �mpares
        }
    }

    printf("\nSoma dos numeros pares: %d\n", somaPares);
    printf("Produto dos numeros impares: %d\n", produtoImpares);

    return 0;
}

