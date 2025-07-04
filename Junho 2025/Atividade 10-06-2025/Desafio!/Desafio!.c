/*Uma pequena loja de artesanato possui apenas um vendedor e comercializa dez tipos de objetos.
O vendedor recebe, mensalmente, salário de R$545,00, acrescido de 5% do valor total de suas vendas.
O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade vendida de cada
peça deve ficar em outro vetor, mas na mesma posição. Crie um programa que receba os preços e as quantidades
vendidas, armazenando-os em seus respectivos vetores (ambos com tamanho dez). Depois, determine e mostre:
--> Um relatório final contendo, quantidade vendida, valor unitário e valor total de cada objeto. Ao final,
deverão ser mostrados o valor geral das vendas e o valor da comissão que será paga ao vendedor; e
--> O valor do objeto mais vendido e sua posição no vetor (não se preocupe com empates).*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float precos[10];
    int quantidade[10];

    for(int i = 0; i < 10; i++){
        printf("Digite o preco unitario do projeto %d:", i + 1);
        scanf("%f", &precos[i]);

        printf("Digite a quantidade vendida do objeto %d:", i + 1);
        scanf("%d", &quantidade[i]);
    }

    float valorTotal[10];
    float somaVendas = 0;

    for(int i = 0; i < 10; i++){
        valorTotal[i] = precos[i] * quantidade[i];
        somaVendas += valorTotal[i];
    }

    printf("\nRelatorio Final:\n");
    printf("Objeto\tQuantidade\tPreco Unitario\tValor Total\n");
    for(int i = 0; i < 10; i++){
        printf("%d\t%d\t%.2f\t\t%.2f\n", i + 1, quantidade[i], precos[i], valorTotal[i]);
    }

    float comissao = somaVendas * 0.05;
    printf("\nValor geral das vendas: R$ %.2f\n", somaVendas);
    printf("Comissao do vendedor: R$ %.2f\n", comissao);

    int maiorQuantidade = quantidade[0];
    int posicaoMaior = 0;

    for(int i = 1; i < 10; i++){
        if(quantidade[i] > maiorQuantidade){
            maiorQuantidade = quantidade[i];
            posicaoMaior = 1;
        }
    }

    printf("\nObjeto mais vendido: Objeto %d\n", posicaoMaior + 1);
    printf("Quantidade vendida: %d\n", maiorQuantidade);
    printf("Preco unitario desse objeto: R$ %.2f\n", precos[posicaoMaior]);


    return 0;
}
