/* Implemente um programa que leia o nome de 5 pessoas e mostre os nomes armazenados. Utilize vetores.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int i = 0;
    char nome[5][30];

    for(i = 0; i < 5; i++){
       printf("Digite 5 nomes diferentes:");
       gets(nome[i]);
    }

    printf("\nNomes armazenados...\n");
    for(i = 0; i < 5; i++){
        printf("%s\n", nome[i]);
    }

    return 0;

}

