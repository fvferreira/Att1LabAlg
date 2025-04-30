#include <stdio.h>
//7º Escreva um algoritmo que leia o nome do usuário e exiba uma mensagem de boas-vindas
int main() {
    char nome[50];
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Bem-vindo, %s!\n", nome);
    return 0;
}