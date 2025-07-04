/* Faça um programa para criptografar uma frase dada pelo usuário (a criptografia troca as
as vogais da frase por *). Mostre a mensagem criptografada na tela.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){

    char vogais;
    char frase[100];
    int quantidadeVogais = 0;

    printf("Digite uma frase:");
    scanf(" %[^\n]", frase); //lê a string com espaço

    for(int i = 0; i < strlen(frase); i++){ //a função strlen retorna a quantidade de caracteres da cadeia. O valor de retorno pode ser armazenado em uma variável
        vogais = tolower(frase[i]); //a função tolower converte o caractere da cadeia, da posição especificada, para minúsculo. Essa função exige a bibliote <ctype.h>
        if(vogais == 'a' || vogais == 'e' || vogais == 'i' || vogais == 'o' || vogais == 'u'){
            frase[i] = '*'; //Substitui direto na frase original
            quantidadeVogais++;
        }
    }

    printf("\nFrase sendo criptografada...\n");
    printf("%s\n", frase);


    return 0;

}
