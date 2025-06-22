/* Fa�a um programa que receba o c�digo do produto comprado e a quantidade comprada do produto. Calcule e mostre:
a) O pre�o unit�rio do produto comprado, seguindo as condi��es I abaixo;
b) O pre�o total da nota;
c) O valor do desconto, seguindo as condi��es II  e aplicado sobre o pre�o total da nota;
d) O pre�o final da nota depois do desconto;

Condi��es I:
-> c�digo 1 a 10: R$10,00 (unidade)
-> c�digo 11 a 20: R$15,00 (unidade)
-> c�digo 21 a 30: R$20,00 (unidade)
-> c�digo 31 a 40: R$30,00 (unidade)

Condi��es II
At� R$250,00 -> desconto de 5%
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
