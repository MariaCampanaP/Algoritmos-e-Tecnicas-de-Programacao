/* Implemente um programa que receba o nome de uma música e um caractere qualquer. Percorra esta cadeia que armazenou o nome
da música a procura do caractere informado e retorne o seu índice ou a mensagem: caractere não encontrado*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char musica[100];
    char caractere;
    char encontrado = 0;
    int i = 1;

    printf("Digite o nome da musica:");
    scanf(" %[^\n]", musica); //lê a string com espaços

    printf("Digite o caractere:");
    scanf(" %c", &caractere); //lê um único caractere

    for(int i = 0; i < strlen(musica); i++){ //O strlen retorna a quantidade de caracteres da cadeia. O valor de retorno pode ser armazenado em uma variável
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
