#include <stdio.h>
//5-Desenvolva um algoritmo que leia um número inteiro e mostre a tabuada desse número (do 1 ao 10).
int main() {
    int n, i;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("Tabuada do %d:\n", n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}