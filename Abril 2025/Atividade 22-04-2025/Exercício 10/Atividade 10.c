/* Uma empresa decidiu dar uma gratifica��o de Natal a seus funcion�rios, baseada no n�mero de horas
extras e no n�mero de horas que o funcion�rio faltou ao trabalho. O valor do pr�mio � obtido pela
consulta �s condi��es que segue, na qual H = n�mero de horas extras - (2 / 3 * (n�mero de horas falta)).
Mostre na tela o valor do pr�mio recebido.
-> H maior que 2.400 -> pr�mio de R$500,00
-> H entre 1.800 e 2.400 -> pr�mio de R$400,00
-> H entre 1.200 e 1.800 -> pr�mio de R$300,00
-> H entre 600 e 1.200 -> pr�mio de R$200,00
-> H menor que 600 -> pr�mio de R$100,00
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
