/* Fa�a um programa que calcule e mostre a �rea de um tri�ngulo. Sabe-se que: �rea = (base * altura) / 2 */

#include <stdio.h>
#include <stdlib.h>

int main(){

    float area;
    float base;
    float altura;

    printf("---Calculo da area de um triangulo---\n\n");

    printf("Digite a base:");
    scanf("%f", &base);

    printf("Digite a altura:");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("\n\n---Resultado da operacao---\n\n");

    printf("Area:%2.f\n", area);

    return 0;

}
