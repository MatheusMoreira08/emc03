/*
Author..: MATHEUS GUILHERME MOREIRA DE OLIVEIRA <matheusgmoreira1@gmail.com>
Date......: 10/05/2024
OB..........: Exibir a tabuada de um número inserido pelo usuário.
*/

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Exibir a tabuada de um numero inserido pelo usuario");

    for (i = 0; i < 20; i++) {
        printf("Digite um valor para n: ");
        scanf("%d", &n);

        printf("Tabuada de %d:", n);
        for (j = 1; j <= n; j++) {
            printf("%d x %d = %d", j, n, j * n);
        }
    }

    return 0;
}
