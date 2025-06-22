/* Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores
a R$500,00. Faça um programa que receba o salário do funcionario e mostre o valor do
salário reajustado ou uma mensagem, caso ele não tenha direito ao aumento*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float salAtual, novoSal, valorAumento;

    printf("Digite o seu salario atual:");
    scanf("%f", &salAtual);

    valorAumento = salAtual * 0.30;
    novoSal = valorAumento + salAtual;

    if(salAtual >= 500.00){
        printf("Nao tem direito ao aumento");
    }else{
        printf("O valor do aumento e R$%.2f", novoSal);
    }

    return 0;

}
