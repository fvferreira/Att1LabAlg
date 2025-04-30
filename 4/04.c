#include <stdio.h>
//4º Escreva um algoritmo que leia dois números inteiros e mostre qual deles é o maior (ou se são iguais).
int n1, n2;
int main(){
    printf("Digite o primeiro número: \n");
    scanf("%d", &n1);
    printf("Digite o segundo número: \n");
    scanf("%d", &n2);
    if(n1>n2){
        printf("O número %d é maior que %d", n1, n2);
    }else if(n2>n1){
        printf("O número %d é maior que %d", n2, n1);
    }else{
        printf("Os números %d e %d são iguais!", n1, n2);
    }
    return 0;
}