/* Faça um programa que receba dez idades, pesos e alturas e calcule e mostre:
a) a média das idades das dez pessoas;
b) a quantidade de pessoas com peso superior a 90 quilos e altura inferior a 1,50;
c) a porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade;
    float peso, altura;
    int soma_idades = 0;
    int acima_90kg_abaixo_150cm = 0;
    int total_maior_190 = 0;
    int entre10e30_maior_190 = 0;
    float media_idades = 0;
    float porcentagem = 0;

    // Laço para ler dados de 10 pessoas
    for (int i = 1; i <= 10; i++) {
        printf("Insira a idade, peso e altura da pessoa %d: ", i);
        scanf("%d %f %f", &idade, &peso, &altura);

        // Soma das idades para calcular a média depois
        soma_idades += idade;

        // Verifica se a pessoa tem peso > 90kg e altura < 1.50m
        if (peso > 90 && altura < 1.50) {
            acima_90kg_abaixo_150cm++;
        }

        // Verifica se a altura é maior que 1.90m
        if (altura > 1.90) {
            total_maior_190++;

            // Se também tiver idade entre 10 e 30, incrementa contador correspondente
            if (idade >= 10 && idade <= 30) {
                entre10e30_maior_190++;
            }
        }
    }

    // Calcula a média das idades
    media_idades = (float)soma_idades / 10;

    // Calcula a porcentagem apenas se houver pessoas com mais de 1.90m
    if (total_maior_190 > 0) {
        porcentagem = ((float)entre10e30_maior_190 / total_maior_190) * 100;
    }

    printf("Média das idades: %.2f\n", media_idades);
    printf("Quantidade de pessoas com peso > 90kg e altura < 1.50m: %d\n", acima_90kg_abaixo_150cm);
    printf("Porcentagem de pessoas entre 10 e 30 anos com altura > 1.90m: %.2f%%\n", porcentagem);

    return 0;
}
