/* Faça um programa que receba 10 números, calcule e mostre a tabuada desse numero*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i = 1;
    int num;

    printf("Digite o numero que deseja calcular:");
    scanf("%d", &num);

    while(i <= 10){
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}
