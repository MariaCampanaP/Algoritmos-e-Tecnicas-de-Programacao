/*Fa�a um programa que receba o nome completo de uma pessoa e mostre os nomes
intermedi�rios entre o primeiro nome e o �ltimo sobrenome abreviados.
Exemplo:
Nome: Maria Silva Costa
Sa�da: Maria S. Costa
Nome: Jo�o Carlos Gomes Marques
Sa�da: J�ao C. G. Marques*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[100]; //Nome completo
    char palavra[20]; //Armazena cada palavra temporariamente, letra por letra
    char primeiro[30]; //Guarda o primeiro nome
    char ultimo[30]; //Guarda o �ltimo nome
    char iniciais[10]; //Guarda a primeira letra dos nomes intermedi�rios
    int i = 0; //Percorre a string nome
    int j = 0; //Percorre a palavra sendo formada
    int k = 0; //Controla a posi��o no vetor de iniciais
    int contadorPalavras = 0; //Conta quantas palavras foram encontradas

    printf("Digite o nome completo: ");
    scanf(" %[^\n]", nome);  // L� a frase com espa�os

    while (1){ //Um la�o infinito que � interrompido manualmente com break
        if(nome[i] == ' ' || nome[i] == '\0'){ //Quando encontramos um espa�o ou o fim da string, significa que uma palavra foi formada
            palavra[j] = '\0'; // Finaliza a palavra

            contadorPalavras++; //Aumenta o n�mero de palavras lidas

            if(contadorPalavras == 1){
                strcpy(primeiro, palavra); //Se for a primeiro palavra, guarda em primeiro
            }else{
                strcpy(ultimo, palavra); //Sen�o: Sup�e que � um nome do meio ou o �ltimo --> guarda em ultimo
                iniciais[k] = palavra[0]; //Guarda a primeira palavra letra da palavra no vetor iniciais
                k++;
            }

            j = 0; // Reinicia posi��o da pr�xima palavra

            if (nome[i] == '\0') break; // Fim da string

        }else{
            palavra[j] = nome[i]; //Se n�o � espa�o nem fim da string, copia o caractere para palavra e avan�a
            j++;
        }

        i++; //Avan�a para o pr�ximo caractere de nome
    }

    printf("\nNome formatado: %s ", primeiro);
    for (int m = 0; m < k - 1; m++){ //Imprime as inciais dos nomes intermedi�rios, cada uma seguida de ponto, k - 1 porque a �ltima letra em iniciais � do �ltimo sobrenome, que ser� impresso completo depois
        printf("%c. ", iniciais[m]); // Imprime iniciais dos nomes do meio
    }
    printf("%s\n", ultimo);// �ltimo nome completo

    return 0;
}
