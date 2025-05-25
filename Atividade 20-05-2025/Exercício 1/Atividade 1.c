/* Implemente um programa que apresente a soma de números ímpares de 0 e 100*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int soma = 0; //inicializa a váriavel acumuladora que vai guardar a soma dos ímpares

    for(i = 1; i <= 100; i+=2){ //começa em i = 1 (primeiro número ímpar), enquanto i <= 100, continua executando, e a cada passo, i aumenta de 2 - garantindo que só percorra números ímpares
        soma+= i; //A cada iteração do for, o valor atual de i é somado a soma
    }

    printf("Soma dos impares:%d\n", soma);

    return 0;

}
