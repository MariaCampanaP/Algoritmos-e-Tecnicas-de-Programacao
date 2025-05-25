/* Faça um programa que verifique e mostre os números entre 1.000 e 2.000 (inclusive) que são divisíveis por 7*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int inicio = 1000;
    int fim = 2000;
    int i;

    for(i >= inicio; i <= 2000; i++){
        if(i % 7 == 0){
        printf("O numero e divisivel por 7\n", i);
        }else{
            printf("O numero nao e divisivel por 7\n", i);
        }
    }

    return 0;
}
