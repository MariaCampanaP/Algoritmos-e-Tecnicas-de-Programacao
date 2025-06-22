/*Faça um programa que receba dois números e um código, e execute as operações listadas
a seguir, de acordo com o código digitado pelo usuário.
Código 1: Mostra a média entre os números digitados
Código 2: Mostra a diferença entre os números digitados
Código 3: Mostra o produto entre os números digitados
Código 4: Mostra a divisão do primeiro pelo segundo
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2;
    int media;
    int diferenca;
    int produto;
    int divisao;
    int codigo;

    printf("Digite dois numeros:");
    scanf("%d %d", &num1, &num2);

    printf("\nMenu\n");
    printf("1 - Media\n");
    printf("2 - Diferenca\n");
    printf("3 - Produto\n");
    printf("4 - Divisao\n");

    printf("\nDigite o codigo de 1 a 4:");
    scanf("%d", &codigo);

    switch(codigo){
    case 1:
        media = (num1 + num2) / 2;
        printf("Media:%d", media);
        break;
    case 2:
        diferenca = num1 - num2;
        printf("Diferenca:%d", diferenca);
        break;
    case 3:
        produto = num1 * num2;
        printf("Produto:%d", produto);
        break;
    case 4:
        divisao = num1 / num2;
        printf("Divisao:%d", divisao);
        break;
    default:
        printf("Nenhuma opcao encontrada!");
        break;
    }

    return 0;

}
