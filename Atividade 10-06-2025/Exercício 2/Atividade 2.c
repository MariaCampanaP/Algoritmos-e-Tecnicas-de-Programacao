/* Fa�a um programa que receba a temperatura m�dia de cada m�s do ano, armazenando-as
em um vetor. Calcule e mostre a maior e a menor temperatura do ano e em que m�s ocorreram
(mostrar o m�s por extenso: 1 - janeiro, 2 - fevereiro...). Desconsidere empates.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    float temperaturas[12];

    //For para pedir que o usu�rio digite a temperatura de cada m�s e guardar no vetor
    for(int i = 0; i < 12; i++){
        printf("Digite a temperatura do mes %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
    }

    //Vari�veis para comparar qual � a maior temperatura do ano e a maior e o m�s em que ocorreu
    float maiorTemp = temperaturas[0];
    int mesMaior = 0;

    float menorTemp = temperaturas[0];
    int mesMenor = 0;

    for(int i = 0; i < 12; i++){
        if(temperaturas[i] > maiorTemp){
            maiorTemp = temperaturas[i];
            mesMaior = i;
        /*Se a temperatura atual (temperaturas[i]) for maior do que a maior temperatura guardada at� agora (maiorTemp)
        Ent�o atualizamos maiorTemp com esse novo valor
        E salvamos o �ndice/ m�s onde essa nova maior temperatura apareceu: mesMaior = i */
        }

        if(temperaturas[i] < menorTemp){
            menorTemp = temperaturas[i];
            mesMenor = i;
        /*Mesma l�gica do anterior, por�m agora estamos vendo se o valor � menor do que o menor que t�nhamos*/
        }
    }

    printf("Maior temperatura: %.1fC em ", maiorTemp);

    switch (mesMaior) {
    case 0:
        printf("Janeiro\n");
        break;
    case 1:
        printf("Fevereiro\n");
        break;
    case 2:
        printf("Mar�o\n");
        break;
    case 3:
        printf("Abril\n");
        break;
    case 4:
        printf("Maio\n");
        break;
    case 5:
        printf("Junho\n");
        break;
    case 6:
        printf("Julho\n");
        break;
    case 7:
        printf("Agosto\n");
        break;
    case 8:
        printf("Setembro\n");
        break;
    case 9:
        printf("Outubro\n");
        break;
    case 10:
        printf("Novembro\n");
        break;
    case 11:
        printf("Dezembro\n");
        break;
    }

    printf("Menor temperatura: %.1fC em ", menorTemp);

    switch (mesMenor) {
    case 0:
        printf("Janeiro\n");
        break;
    case 1:
        printf("Fevereiro\n");
        break;
    case 2:
        printf("Mar�o\n");
        break;
    case 3:
        printf("Abril\n");
        break;
    case 4:
        printf("Maio\n");
        break;
    case 5:
        printf("Junho\n");
        break;
    case 6:
        printf("Julho\n");
        break;
    case 7:
        printf("Agosto\n");
        break;
    case 8:
        printf("Setembro\n");
        break;
    case 9:
        printf("Outubro\n");
        break;
    case 10:
        printf("Novembro\n");
        break;
    case 11:
        printf("Dezembro\n");
        break;
    }

    return 0;

}

