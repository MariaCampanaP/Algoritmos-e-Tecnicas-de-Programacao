/* Crie um programa que receba as vendas semanais (de um mês com quatro semanas) de três vendedores
de uma loja e armazene essas vendas em uma matriz. O programa deverá calcular e mostrar:
-> O total de vendas do mês de cada vendedor;
-> O total de vendas de cada semana (todos os vendedores juntos);
-> O total de vendas do mês somando todos os vendedores*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float vendas[3][4];
    float total_vendedor[3] = {0}; //Vetor para armazenar o total de vendas de cada vendedor. Inicializado com zero
    float total_semana[4] = {0}; //Declara um vetor para armazenar o total de vendas de cada semana (somando todos os vendedores). Inicializado com zero
    float total_geral = 0; //Variável que vai guardar o total geral (soma tudo). Começa em zero

    //Lê as vendas
    for(int i = 0; i < 3; i++){
        printf("Digite as vendas das 4 semanas para o vendedor %d\n", i + 1);
        for(int j = 0; j < 4; j++){
            printf("Semana %d: ", j + 1);
            scanf("%f", &vendas[i][j]);
        }
    }

    //Calcula o total de cada vendedor
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            total_vendedor[i] += vendas[i][j]; //Soma cada valor vendas[i][j] no vetor total_vendedor[i]
        }
    }

    //Calcula o total de cada semana
    for(int j = 0; j < 4; j++){
        for(int i = 0; i < 3; i++){
            total_semana[j] += vendas[i][j]; //Soma as vendas daquela semana no vetor total_semana[j]
        }
    }

    //Calcula o total geral
    for(int i = 0; i < 3; i++){
        total_geral += total_vendedor[i]; //Soma os totais mensais de cada um para obter o total geral
    }

    //Total por vendedor
    printf("\nTotal de vendas do mes por vendedor:");
    for(int i = 0; i < 3; i++){
        printf("Vendedor %d: %.2f\n", i + 1, total_vendedor[i]);
    }

    //Total por semana
    printf("\nTotal de vendas por semana:");
    for(int j = 0; j < 4; j++){
        printf("Semana %d: %.2f\n", j + 1, total_semana[j]);
    }

    //Total geral
    printf("\nTotal geral de vendas do mes: %.2f\n", total_geral);

    return 0;
}
