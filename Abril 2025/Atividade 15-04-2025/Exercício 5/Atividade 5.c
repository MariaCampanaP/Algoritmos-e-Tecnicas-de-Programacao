/* Fa�a um programa que receba dois n�meros inteiros e mostre
    a) A soma;
    b) A diferen�a;
    c) O produto;
    d) O quociente da divis�o inteira;
    e) O resto da divis�o.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int soma;
    int diferenca;
    int produto;
    int quociente;
    int restoDivisao;
    int numA;
    int numB;

    printf("---Calculadora---\n\n");

    printf("Digite o primeiro numero:");
    scanf("%d", &numA);

    printf("Digite o segundo numero:");
    scanf("%d", &numB);

    printf("\n\n---Operacoes Matematicas---\n\n");

    printf("Soma:%d\n", numA + numB);
    printf("Diferenca:%d\n", numA - numB);
    printf("Produto:%d\n", numA * numB);
    printf("Quociente da divisao inteira:%d\n", numA / numB);
    printf("O resto da divisao:%d\n", numA % numB);

    return 0;

}
