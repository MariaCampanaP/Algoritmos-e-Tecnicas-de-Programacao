/* Fa�a um programa que receba o sal�rio atual de um funcion�rio e, usando as condi��es
a seguir, calcule e mostre o valor do aumento e o novo sal�rio:
-> At� 499,99 de sal�rio: aumento de 15%
-> De 500,00 a 1.499,99 de sal�rio: aumento de 10%
-> De 1.500,00 a 2.499,99 de sal�rio: aumento de 5%
-> 2.500,00 ou mais de sal�rio: sem aumento
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float salAtual, novoSal, valorAumento;

    printf("Digite o seu salario atual:");
    scanf("%f", &salAtual);

    if(salAtual <= 499){
        valorAumento = salAtual * 0.15;
        novoSal = valorAumento + salAtual;
        printf("O novo salario e R$%.2f", novoSal);
    }else if (salAtual >= 500 && salAtual <= 1499){
        valorAumento = salAtual * 0.10;
        novoSal = valorAumento + salAtual;
        printf("O novo salario e R$%.2f", novoSal);
    }else if (salAtual >= 1500 && salAtual <= 2499){
        valorAumento = salAtual * 0.05;
        novoSal = valorAumento + salAtual;
        printf("O novo salario e R$%.2f", novoSal);
    }else{
        printf("O seu salario nao possui aumento");
    }

    return 0;

}
