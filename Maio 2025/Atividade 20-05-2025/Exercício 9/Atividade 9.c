/* Faça um programa que receba várias idades, calcule e mostre a média das idades digitadas. Finalize o programa quando for digitada a idade zero*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade = 0;
    int somaIdades = 0;
    int contador = 0;
    float mediaIdadesDigitadas;

    do{
        printf("Insira a idade:\n");
        scanf("%d", &idade);

        if(idade > 0){
            contador += 1;

            somaIdades = (somaIdades + idade);
            mediaIdadesDigitadas = somaIdades * 1.0 / contador * 1.0;

            printf("Idade media:%.2f\n", mediaIdadesDigitadas);
        }
    }while (idade > 0);

    return 0;

}
