/* Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião em relação ao filme:
-> ótimo - 3;
-> bom - 2;
-> regular - 1;
Faça um programa que receba a idade e a opinião de quinze espectadores, calcule e mostre:
a) a média das idades das pessoas que responderam ótimo;
b) a quantidade de pessoas que responderam regular;
c) a porcentagem de pessoas que responderam bom, entre todos os espectadores analisados.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int nota = 0;
    int idade = 0;
    int somaIdades = 0;
    int otimo = 0;
    int bom = 0;
    int regular = 0;
    float media = 0;
    float porcentagem = 0;

    for(int i = 1; i <= 15; i++){
        printf("Insira a idade e nota do filme:\n");
        scanf("%d %d", &idade, &nota);

        if(nota == 3){
            otimo++;
            somaIdades = (somaIdades + idade);
        }

        if(nota == 1){
            regular++;
        }

        if(nota == 2){
            bom++;
        }

    }

    if(otimo > 0){
        media = somaIdades / (float)otimo;
    }else{
        media = 0;
    }

    porcentagem = (bom / 15.0) * 100;

    printf("Idade media dos espectadores que avaliaram com otimo:%.lf\n", media);
    printf("Espectadores que avaliaram como regular:%d\n", regular);
    printf("Porcentagem de espectadores que avaliaram como bom:%.2f\n", porcentagem);

    return 0;

}
