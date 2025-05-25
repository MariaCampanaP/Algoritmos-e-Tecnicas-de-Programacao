/* Faça um programa que leia 10 números e mostre-os na ordem lida*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    int i;

    for(i = 0; i <= 9; i++){
        scanf("%d", &num);
        printf("Valor lido:%d\n", num);
    }

    return 0;

}
