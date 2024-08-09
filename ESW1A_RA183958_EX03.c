/*
Author..: MATHEUS GUILHERME MOREIRA DE OLIVEIRA <matheusgmoreira1@gmail.com>
Date......: 10/05/2024
OB..........: Contar e imprimir o total de valores negativos inseridos pelo usuário.
*/

#include <stdio.h>

int main() {
    int a, i, countNegativos = 0;

    printf("Contar e imprimir o total de valores negativos inseridos pelo usuario");

    for (i = 0; i < 5; i++) {4
        printf("Digite o valor de a: ");
        scanf("%d", &a);

        if (a < 0) {
            countNegativos++;
        }
    }

    printf("Total de valores negativos: %d", countNegativos);

    return 0;
}