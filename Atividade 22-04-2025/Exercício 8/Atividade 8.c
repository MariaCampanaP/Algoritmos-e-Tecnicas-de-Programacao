/* Faça um programa que receba a idade de um nadador e mostre sua categoria, usando as condições
a seguir. Para idade inferior a 5, deverá mostrar a mensagem "Sem categoria ainda".
-> 5 a 7 anos: infantil
-> 8 a 10 anos: juvenil
-> 11 a 15 anos: adolescente
-> 16 a 30 anos: adulto
-> +30 anos: senior
*/

int main(){

    int idade;

    printf("Digite a idade do nadador:");
    scanf("%d", &idade);

    if(idade < 5){
        printf("Sem categoria ainda!");
    }else if (idade >= 5 && idade <= 7){
        printf("Infantil!");
    }else if (idade >= 8 && idade <= 10){
        printf("Juvenil!");
    }else if (idade >= 11 && idade <= 15){
        printf("Adolescente!");
    }else if (idade >= 16 && idade <= 30){
        printf("Adulto!");
    }else{
        printf("Senior!");
    }

    return 0;

}
