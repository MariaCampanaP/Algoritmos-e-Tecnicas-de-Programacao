/* Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
    a) A idade da pessoa;
    b) Quantos anos ela terá em 2050.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade;
    int anoNasc;
    int anoAtual;
    int idadeFuturo;

    printf("---A idade da pessoa---\n\n");

    printf("Qual o seu ano de nascimento?:");
    scanf("%d", &anoNasc);

    printf("Qual o ano atual?:");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNasc;

    printf("A idade da pessoa eh:%d", idade);

    printf("\n\n---A idade da pessoa em 2050---\n\n");

    printf("Qual seu ano de nascimento?:");
    scanf("%d", &anoNasc);

    idadeFuturo = 2050 - anoNasc;

    printf("\nA idade da pessoa em 2050 sera:%d\n", idadeFuturo);

    return 0;

}
