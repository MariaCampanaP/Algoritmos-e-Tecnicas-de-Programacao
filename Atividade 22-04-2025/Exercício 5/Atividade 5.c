/* Uma empresa decide dar um aumento de 30% aos funcion�rios com sal�rios inferiores
a R$500,00. Fa�a um programa que receba o sal�rio do funcionario e mostre o valor do
sal�rio reajustado ou uma mensagem, caso ele n�o tenha direito ao aumento*/

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
