/*Faça um programa que receba o nome completo de uma pessoa e mostre os nomes
intermediários entre o primeiro nome e o último sobrenome abreviados.
Exemplo:
Nome: Maria Silva Costa
Saída: Maria S. Costa
Nome: João Carlos Gomes Marques
Saída: Jõao C. G. Marques*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[100]; //Nome completo
    char palavra[20]; //Armazena cada palavra temporariamente, letra por letra
    char primeiro[30]; //Guarda o primeiro nome
    char ultimo[30]; //Guarda o último nome
    char iniciais[10]; //Guarda a primeira letra dos nomes intermediários
    int i = 0; //Percorre a string nome
    int j = 0; //Percorre a palavra sendo formada
    int k = 0; //Controla a posição no vetor de iniciais
    int contadorPalavras = 0; //Conta quantas palavras foram encontradas

    printf("Digite o nome completo: ");
    scanf(" %[^\n]", nome);  // Lê a frase com espaços

    while (1){ //Um laço infinito que é interrompido manualmente com break
        if(nome[i] == ' ' || nome[i] == '\0'){ //Quando encontramos um espaço ou o fim da string, significa que uma palavra foi formada
            palavra[j] = '\0'; // Finaliza a palavra

            contadorPalavras++; //Aumenta o número de palavras lidas

            if(contadorPalavras == 1){
                strcpy(primeiro, palavra); //Se for a primeiro palavra, guarda em primeiro
            }else{
                strcpy(ultimo, palavra); //Senão: Supõe que é um nome do meio ou o último --> guarda em ultimo
                iniciais[k] = palavra[0]; //Guarda a primeira palavra letra da palavra no vetor iniciais
                k++;
            }

            j = 0; // Reinicia posição da próxima palavra

            if (nome[i] == '\0') break; // Fim da string

        }else{
            palavra[j] = nome[i]; //Se não é espaço nem fim da string, copia o caractere para palavra e avança
            j++;
        }

        i++; //Avança para o próximo caractere de nome
    }

    printf("\nNome formatado: %s ", primeiro);
    for (int m = 0; m < k - 1; m++){ //Imprime as inciais dos nomes intermediários, cada uma seguida de ponto, k - 1 porque a última letra em iniciais é do último sobrenome, que será impresso completo depois
        printf("%c. ", iniciais[m]); // Imprime iniciais dos nomes do meio
    }
    printf("%s\n", ultimo);// Último nome completo

    return 0;
}
