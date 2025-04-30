#include <stdio.h>
//2º Crie um algoritmo que leia dois números inteiros e exiba a multiplicação entre eles.
int n1, n2, resultado;
int main(){
    printf("Digite o primeiro número: \n");
    scanf("%d",&n1);
    printf("Digite o segundo número: \n");
    scanf("%d",&n2);
    resultado = n1*n2;
    printf("A multiplicação entre %d e %d é: %d", n1, n2, resultado);
    return 0;
}