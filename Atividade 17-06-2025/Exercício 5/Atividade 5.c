/* Faça um programa que receba uma palavra e verifique se ela constitui um palindromo, ou
seja, se a palavra escrita do fim para o começo fica igual à palavra escrita do começo para o
fim.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    char palavra[30];
    int ehPalindromo = 1;
    int tamanho;

    printf("Digite uma palavra:");
    scanf("%s", palavra); //lê uma palavra sem espaços

    tamanho = strlen(palavra); //A função strlen retorna a quantidade de caracteres da cadeia. O valor é guardado na variável tamanho

    /*Esse for percorre só a metade da palavra, porque não precisamos comparar tudo:
    quando comparamos o primeiro com o último;
    depois o segundo com o penúltimo;
    ...e assim por diante, estamos fazendo comparações espelhadas. Por isso, só precisamos ir até a metade (tamanho / 2)*/
    for(int i = 0; i < tamanho / 2; i++){
        if(palavra[i] != palavra [tamanho - 1 - i]){ //Comparamos se o caractere da frente (palavra[i]) e o caractere correspondente de trás palavra[tamanho - 1 - i]
            ehPalindromo = 0; //Marca que não é um palindromo
            break;
        }
    }

    if(ehPalindromo){ //ehPalindromo ainda vale 1 (Verdadeiro), então todas as comparações deram certo, e a palavra é um palindromo
        printf("E um palindromo!\n");
    }else{
        printf("Nao e um palindromo!\n"); //Caso contrário, algum par falhou, e não é
    }

    return 0;

}
