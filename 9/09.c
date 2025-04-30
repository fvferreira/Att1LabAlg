#include <stdio.h>
//9° Peça para o usuário digitar um símbolo especial, um número e uma letra.
//Exiba uma "senha" com essa combinação. Exemplo a seguir:
//Entrada: @, 7, G
//Saída: Sua senha é: @7G
int main() {
    char simbolo, letra;
    int numero;
    
    printf("Digite um simbolo especial: ");
    scanf(" %c", &simbolo);
    
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    
    printf("Sua senha é: %c%d%c\n", simbolo, numero, letra);
    
    return 0;
}