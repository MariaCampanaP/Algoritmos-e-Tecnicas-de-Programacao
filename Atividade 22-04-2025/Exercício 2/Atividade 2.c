/* Faça um programa que receba duas notas, calcule e mostre a média aritmética e
uma mensagem de acordo com as seguintes condições:
 --> de 0,0 a 3,9 -> "Reprovado"
 --> de 4,0 a 6,9 -> "Exame"
 --> 7,0 ou mais -> "Aprovado"
 */

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

     float nota1, nota2;
     float media;

     printf("Digite 2 notas de um aluno:");
     scanf("%f %f", &nota1, &nota2);

     media = (nota1 + nota2) / 2;

     if(media >= 0.0 && media <= 3.9){
        printf("Media:%.2f\n", media);
        printf("Reprovado!");
     }else if (media >= 4.0 && media <= 6.9){
         printf("Media:%.2f\n", media);
         printf("Exame!");
     }else{
         printf("Media:%.2f\n", media);
         printf("Aprovado!");
     }

     return 0;

 }
