/* Faça um programa que receba o código do produto comprado e a quantidade comprada do produto. Calcule e mostre:
a) O preço unitário do produto comprado, seguindo as condições I abaixo;
b) O preço total da nota;
c) O valor do desconto, seguindo as condições II  e aplicado sobre o preço total da nota;
d) O preço final da nota depois do desconto;

Condições I:
-> código 1 a 10: R$10,00 (unidade)
-> código 11 a 20: R$15,00 (unidade)
-> código 21 a 30: R$20,00 (unidade)
-> código 31 a 40: R$30,00 (unidade)

Condições II
Até R$250,00 -> desconto de 5%
Entre R$250,00 e R$500,00 -> desconto de 10%
Acima de R$500,00 -> desconto de 15%
*/

int main(){

    int codigo;
    float quantidade, totalNota, desconto;

    printf("Digite o codigo do produto:");
    scanf("%d", &codigo);

    printf("Digite a quantidade comprada:");
    scanf("%f", &quantidade);

    if(codigo >= 1 && codigo <= 10){
        printf("Preco unitario:R$10.00\n");
        totalNota = quantidade * 10.00;
        printf("Valor da nota:R$%.2f\n", totalNota);
    }else if (codigo >= 11 && codigo <= 20){
        printf("Preco unitario:R$15.00\n");
        totalNota = quantidade * 15.00;
        printf("Valor da nota:R$%.2f\n", totalNota);
    }else if (codigo >= 21 && codigo <= 30){
        printf("Preco unitario:R$20.00\n");
        totalNota = quantidade * 20.00;
        printf("Valor da nota:R$%.2f\n", totalNota);
    }else if (codigo >= 31 && codigo <= 40){
        printf("Preco unitario:R$30.00\n");
        totalNota = quantidade * 30.00;
        printf("Valor da nota:%.2f\n", totalNota);
    }else{
        printf("Codigo invalido!");
    }

    if(totalNota <= 250.00){
        desconto = totalNota * 0.05;
        totalNota = totalNota - desconto;
    }else if (totalNota >= 250.00 && totalNota <= 500.00){
        desconto = totalNota * 0.10;
        totalNota = totalNota - desconto;
    }else{
        desconto = totalNota * 0.15;
        totalNota = totalNota - desconto;
    }

    printf("O valor do desconto e %.2f\n", desconto);
    printf("Nota com desconto e %.2f\n", totalNota);

    return 0;

}
