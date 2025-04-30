#include <stdio.h>
//6º Crie um algoritmo que leia 3 notas de um aluno, calcule a média e informe se ele foi aprovado (média ≥ 7) ou reprovado.
int main() {
    float nota1, nota2, nota3, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
     media = (nota1 + nota2 + nota3) / 3;
    if (media >= 7) {
        printf("Aprovado! Media: %.2f\n", media);
    } else {
        printf("Reprovado! Media: %.2f\n", media);
    }
    
    return 0;
}