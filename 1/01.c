#include <stdio.h>
//1º Escreva um algoritmo que exiba na tela o nome da comida favorita.
char comida[20];
int main()
{
printf("Qual é a sua comida favorita? \n");
scanf("%s", comida);
printf("A sua comida favorita é: %s", comida);
return 0;
}