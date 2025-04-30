#include <stdio.h>
// 3º Faça um algoritmo que leia um número inteiro e informe se ele é par ou ímpar.
int n;
int main() {
    printf("Digite um número inteiro: \n");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("O número %d é par\n", n);
    } else {
        printf("O número %d é ímpar!\n", n);
    }
    return 0;
}