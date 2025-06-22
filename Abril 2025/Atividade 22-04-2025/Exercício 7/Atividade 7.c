/* Uma ag�ncia banc�ria possui dois tipos de investimentos, conforme os c�digos a seguir.
Fa�a um programa que receba o tipo de investimento e o valor investido, calcule e mostre o valor corrigido
ap�s um m�s de investimento, de acordo com o tipo de investimento.
C�digo 1. Poupan�a -> 0.5% de rendimento ao m�s
C�digo 2. Fundos de renda fixa -> 1.1% de rendimento ao m�s
*/

int main(){

    float valorFinal, valorInicial;
    int codigo;

    printf("Digite o valor investido:");
    scanf("%f", &valorInicial);

    printf("\nMenu\n");
    printf("1 - Poupanca\n");
    printf("2 - Fundos de renda fixa\n");

    printf("\nDigite o codigo:");
    scanf("%d", &codigo);

    switch(codigo){
    case 1:
        valorFinal = valorInicial * (1 + 0.005);
        printf("O valor investido foi de R$%.2f", valorFinal);
        break;
    case 2:
        valorFinal = valorInicial * (1 + 0.011);
        printf("O valor investido foi de R$%.2f", valorFinal);
        break;
    default:
        printf("Codigo nao encontrado!");
        break;

    }

    return 0;

}
