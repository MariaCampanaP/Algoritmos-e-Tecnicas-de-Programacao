/* Fa�a um programa que receba uma palavra e verifique se ela constitui um palindromo, ou
seja, se a palavra escrita do fim para o come�o fica igual � palavra escrita do come�o para o
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
    scanf("%s", palavra); //l� uma palavra sem espa�os

    tamanho = strlen(palavra); //A fun��o strlen retorna a quantidade de caracteres da cadeia. O valor � guardado na vari�vel tamanho

    /*Esse for percorre s� a metade da palavra, porque n�o precisamos comparar tudo:
    quando comparamos o primeiro com o �ltimo;
    depois o segundo com o pen�ltimo;
    ...e assim por diante, estamos fazendo compara��es espelhadas. Por isso, s� precisamos ir at� a metade (tamanho / 2)*/
    for(int i = 0; i < tamanho / 2; i++){
        if(palavra[i] != palavra [tamanho - 1 - i]){ //Comparamos se o caractere da frente (palavra[i]) e o caractere correspondente de tr�s palavra[tamanho - 1 - i]
            ehPalindromo = 0; //Marca que n�o � um palindromo
            break;
        }
    }

    if(ehPalindromo){ //ehPalindromo ainda vale 1 (Verdadeiro), ent�o todas as compara��es deram certo, e a palavra � um palindromo
        printf("E um palindromo!\n");
    }else{
        printf("Nao e um palindromo!\n"); //Caso contr�rio, algum par falhou, e n�o �
    }

    return 0;

}
