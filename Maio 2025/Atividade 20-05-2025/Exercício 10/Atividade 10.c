/* Fa�a um programa que apresente o menu de op��es a seguir:
Menu de op��es:
1. M�dia aritm�tica
2. M�dia ponderada
3. Sair
Digite a op��o desejada.
-> Na op��o 1: receber duas notas, calcular e mostrar a m�dia aritm�tica.
-> Na op��o 2: receber tr�s notas e seus respectivos pesos, calcular e mostrar a m�dia ponderada.
-> Na op��o 3: sair do programa.
Verifique a possibilidade de op��o inv�lida. Nesse caso,o programa dever� mostrar uma mensagem.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    float nota1, nota2, nota3;
    float peso;
    float media = 0;
    float mediaPonderada = 0;
    float pesoGeral = 0;

    do{

    printf("---Menu de opcoes---\n");
    printf("1. Media Aritmetica\n");
    printf("2. Media Ponderada\n");
    printf("3. Sair\n");
    scanf("%d", &i);

    if(i == 1){ //Quando for selecionado a primeiro op��o que � m�dia aritmetica
        printf("Selecionado: Media Aritmetica\n");
        printf("Digite as duas notas:");
        scanf("%f %f", &nota1, &nota2);
        media = nota1 + nota2;
        media = media / 2;
        printf("Resultado:%.2f\n", media);
        media = 0;

    }else if (i == 2){ //Quando for selecionado a segunda op��o que � media ponderada
        for(int a = 1; a <= 3; a++){
            printf("Selecionado: Media Ponderada\n");
            printf("Digite uma nota:");
            scanf("%f", &nota3);
            printf("Digite o peso da nota:");
            scanf("%f", &peso);
            mediaPonderada = mediaPonderada + (nota3 * peso);
            pesoGeral = pesoGeral + peso;
        }

        media = mediaPonderada / pesoGeral;
        printf("Resultado:%.2f\n", media);
        media = 0;

    }else if (i > 3){ //Quando for selecionado a terceira op��o que � para sair do programa
        printf("\Opcao invalida\n");
    }

    }while (i < 3 || i > 3);
    printf("\nSaindo...\n");

    return 0;

}
