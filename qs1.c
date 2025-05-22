//Desafio 1) Escreva um programa em linguagem C que leia um número inteiro e diga se ele é primo ou não.

#include <stdio.h>

int main () {
    int num,isPrimer = 1;

    printf("========================================\n\n");

    printf("Informe um numero inteiro: ");
    scanf("%i",&num);

    if (num < 2) {
        printf("%i nao eh primo",num);
        return 0;

    } else if (num == 2) {
        printf("%i eh primo",num);
        return 0;

    } else if (num % 2 == 0) {
        isPrimer = 0;

    } else if (num % 3 == 0 && num != 3) {
        isPrimer = 0;

    } else if (num % 5 && num != 5) {
        isPrimer = 0;

    } if (isPrimer) {
        printf("%i eh primo",num);

    } else {
        printf("%i nao eh primo",num);

    }

    printf("\n\n========================================");
    return 0;
}