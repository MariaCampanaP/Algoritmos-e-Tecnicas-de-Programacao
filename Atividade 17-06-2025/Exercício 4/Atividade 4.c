/* Fa�a um programa para criptografar uma frase dada pelo usu�rio (a criptografia troca as
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
    scanf(" %[^\n]", frase); //l� a string com espa�o

    for(int i = 0; i < strlen(frase); i++){ //a fun��o strlen retorna a quantidade de caracteres da cadeia. O valor de retorno pode ser armazenado em uma vari�vel
        vogais = tolower(frase[i]); //a fun��o tolower converte o caractere da cadeia, da posi��o especificada, para min�sculo. Essa fun��o exige a bibliote <ctype.h>
        if(vogais == 'a' || vogais == 'e' || vogais == 'i' || vogais == 'o' || vogais == 'u'){
            frase[i] = '*'; //Substitui direto na frase original
            quantidadeVogais++;
        }
    }

    printf("\nFrase sendo criptografada...\n");
    printf("%s\n", frase);


    return 0;

}
