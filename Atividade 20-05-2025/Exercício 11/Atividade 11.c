/* Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código. Os códigos utilizados são:
-> 1, 2, 3, ou 4: votos para os respectivos candidatos
-> 4: voto nulo
-> 6: voto em branco
Faça um programa que calcule e mostre:
-> O total de votos para cada candidato
-> O total de votos nulos
-> O total de votos em branco
-> A porcentagem de votos nulos sobre o total de votos brancos
-> A porcentagem de votos em branco sobre o total de votos
Para finalizar o conjunto de votos, tem-se o valor zero e, para códigos inválidos, o programa deverá mostrar uma mensagem.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int voto = 0;
    int quant1 = 0;
    int quant2 = 0;
    int quant3 = 0;
    int quant4 = 0;
    int quantNulo = 0;
    int quantBranco = 0;
    int porcentNulo = 0;
    int porcentBranco = 0;
    int total = 0;

    do{
        printf("Digite o numero do candidato 1:\n");
        scanf("%d", &voto);

        //Primeiro candidato
        if(voto == 1){
            quant1++;
            voto++;
            printf("Voto computado para o candidato 1\n");

        //Segundo candidato
        }else if (voto == 2){
            quant2++;
            total++;
            printf("Voto computado para o candidato 2\n");

        //Terceiro candidato
        }else if (voto == 3){
            quant3++;
            total++;
            printf("Voto computado para o candidato 3\n");

        //Quarto candidato
        }else if (voto == 4){
            quant4++;
            total++;
            printf("Voto computado para o candidato 4\n");

        //Quinto candidato - nulo
        }else if (voto == 5){
            quantNulo++;
            total++;
            printf("Voto em nulo registrado\n");

        //Sexto candidato - branco
        }else if (voto == 6){
            quantBranco++;
            total++;
            printf("Voto em branco registrado\n");

        //Voto igual a 0
        }else if (voto == 0){
            printf("Saindo...\n");

        //Nenhuma das opções anteriores
        }else{
            printf("Voto invalido\n");
        }

    }while (voto > 0 || voto < 0);
    porcentNulo = quantNulo * 100;
    porcentBranco = quantBranco * 100;
    porcentNulo = porcentNulo / total;
    porcentBranco = porcentBranco / total;

    printf("Candidato 1:%d votos\n", quant1);
    printf("Candidato 2:%d votos\n", quant2);
    printf("Candidato 3:%d votos\n", quant3);
    printf("Candidato 4:%d votos\n", quant4);
    printf("Votos nulos:%d votos\n", quantNulo);
    printf("Votos em Branco:%d\n", quantBranco);
    printf("Porcentagem de votos nulo:%d\n", porcentNulo);
    printf("Porcentagem de votos em branco:%d\n", porcentBranco);

    return 0;

}
