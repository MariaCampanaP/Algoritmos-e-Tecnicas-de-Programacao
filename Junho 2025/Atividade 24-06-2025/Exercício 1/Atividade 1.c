/* Implemente um programa que:
-> Preencha uma matriz 3 x 3 com valores inteiros, maiores que zero;
-> Apresente todos os n�meros da matriz;
-> Encontre e apresente o maior valor da matriz*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int m [3][3];
    int i, j;
    int maiorNum;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &m[i][j]);
            do{ //Utilizado o do...while pq eu n�o sei quantas vezes devo repetir
                if(m[i][j] <= 0){ //Verifica��o para saber se o n�mero � maior que zero ou n�o
                printf("Insira valores maiores que zero");
                i++;
            }
        }while(m[i][j] <= 0);
    }
}

    printf("\nElementos da matriz\n"); //Apresenta��o dos elementos da matriz
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", m[i][j]);
        }
    }

    printf("\n\nMaior elemento da matriz\n"); //Qual o maior elemento da matriz
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(m[i][j] > maiorNum){
                maiorNum = m[i][j];
                }
            }
        }

        printf("%d", maiorNum);

        return 0;

}


