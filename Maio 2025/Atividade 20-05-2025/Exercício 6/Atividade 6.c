/* Faça um programa que receba dez números, calcule e mostre a soma dos números pares e o produto dos números ímpare*/

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
            somaPares += num;  // soma números pares
        } else {
            produtoImpares *= num;  // multiplica números ímpares
        }
    }

    printf("\nSoma dos numeros pares: %d\n", somaPares);
    printf("Produto dos numeros impares: %d\n", produtoImpares);

    return 0;
}

