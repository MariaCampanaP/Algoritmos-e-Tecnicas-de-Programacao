/* Implemente um programa que receba o nome de uma m�sica e um caractere qualquer. Percorra esta cadeia que armazenou o nome
da m�sica a procura do caractere informado e retorne o seu �ndice ou a mensagem: caractere n�o encontrado*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char musica[100];
    char caractere;
    char encontrado = 0;
    int i = 1;

    printf("Digite o nome da musica:");
    scanf(" %[^\n]", musica); //l� a string com espa�os

    printf("Digite o caractere:");
    scanf(" %c", &caractere); //l� um �nico caractere

    for(int i = 0; i < strlen(musica); i++){ //O strlen retorna a quantidade de caracteres da cadeia. O valor de retorno pode ser armazenado em uma vari�vel
        if(musica[i] == caractere){
            printf("Ocorrencia de caractere na posicao %d\n", i);
            encontrado = 1;
        }
    }
        if(!encontrado){
            printf("Caractere nao encontrado.\n");
        }

    return 0;

}
