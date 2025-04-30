#include <stdio.h>
//8º Leia um caractere qualquer (como um símbolo: @, #, %, &, etc.) e exiba ele entre colchetes.
int main() {
    char caractere;
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);
    printf("[%c]\n", caractere);
    return 0;
}
