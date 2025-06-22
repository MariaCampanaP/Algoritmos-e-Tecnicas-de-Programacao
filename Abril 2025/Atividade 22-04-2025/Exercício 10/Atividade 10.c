/* Uma empresa decidiu dar uma gratificação de Natal a seus funcionários, baseada no número de horas
extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido pela
consulta às condições que segue, na qual H = número de horas extras - (2 / 3 * (número de horas falta)).
Mostre na tela o valor do prêmio recebido.
-> H maior que 2.400 -> prêmio de R$500,00
-> H entre 1.800 e 2.400 -> prêmio de R$400,00
-> H entre 1.200 e 1.800 -> prêmio de R$300,00
-> H entre 600 e 1.200 -> prêmio de R$200,00
-> H menor que 600 -> prêmio de R$100,00
*/

int main(){

    float H;
    float extra, falta;

    printf("Digite a quantidade de horas extras:");
    scanf("%f", &extra);

    printf("Digite a quantidade de horas falta:");
    scanf("%f", &falta);

    H = extra - (2.0 / 3.0 * (falta));

    if(H >= 2400){
        printf("Premio de R$500,00");
    }else if (H >= 1800 && H <= 2400){
        printf("Premio de R$400,00");
    }else if (H >= 1200 && H <= 1800){
        printf("Premio de R$300,00");
    }else if (H >= 600 && H <= 1200){
        printf("Premio de R$200,00");
    }else{
        printf("Premio de R$100,00");
    }

    return 0;

}
