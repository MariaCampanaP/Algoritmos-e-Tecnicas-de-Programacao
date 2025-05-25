/* Faça um programa que receba a quantidade de idades que serão inseridas e as idades, calcule e mostre a média das idades digitadas*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int quantidadeIdades = 0;
    int idade = 0;
    int somaIdades = 0;
    float mediaIdadesDigitadas;

    printf("Digite quantas idades serao inseridas:");
    scanf("%d", &quantidadeIdades);

    if(quantidadeIdades <= 0){
        printf("Quantidade invalida de idades.\n");
        return 1;
    }

    for(i = 1; i <= quantidadeIdades; i++){
            printf("Digite a idade\n");
            scanf("%d", &idade);
            somaIdades += idade;

    }

    mediaIdadesDigitadas = somaIdades * 1.0 / quantidadeIdades * 1.0;

    printf("Idade media:%.2f\n", mediaIdadesDigitadas);

    return 0;

}
