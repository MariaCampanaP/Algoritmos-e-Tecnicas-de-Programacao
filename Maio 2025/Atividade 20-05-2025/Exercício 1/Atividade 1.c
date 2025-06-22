/* Implemente um programa que apresente a soma de n�meros �mpares de 0 e 100*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int soma = 0; //inicializa a v�riavel acumuladora que vai guardar a soma dos �mpares

    for(i = 1; i <= 100; i+=2){ //come�a em i = 1 (primeiro n�mero �mpar), enquanto i <= 100, continua executando, e a cada passo, i aumenta de 2 - garantindo que s� percorra n�meros �mpares
        soma+= i; //A cada itera��o do for, o valor atual de i � somado a soma
    }

    printf("Soma dos impares:%d\n", soma);

    return 0;

}
