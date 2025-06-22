/*Fa�a um programa que receba dois n�meros e um c�digo, e execute as opera��es listadas
a seguir, de acordo com o c�digo digitado pelo usu�rio.
C�digo 1: Mostra a m�dia entre os n�meros digitados
C�digo 2: Mostra a diferen�a entre os n�meros digitados
C�digo 3: Mostra o produto entre os n�meros digitados
C�digo 4: Mostra a divis�o do primeiro pelo segundo
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
