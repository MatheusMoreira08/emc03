/*
Author..: MATHEUS GUILHERME MOREIRA DE OLIVEIRA <matheusgmoreira1@gmail.com>
Date......: 10/05/2024
OB..........: Calcular e exibir o somatório das fatoriais de 15 valores inseridos pelo usuário.
*/

#include <stdio.h>

int main() {
    int valores[15];
    int i, j, fatorial, somatorio = 0;

    printf("Calcular e exibir o somatorio das fatoriais de 15 valores inseridos pelo usuario");

    // Lendo os 15 valores
    for (i = 0; i < 15; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);

        // Calculando a fatorial do valor lido
        fatorial = 1;
        for (j = 1; j <= valores[i]; j++) {
            fatorial *= j;
        }

        // Somando ao somatório
        somatorio += fatorial;
    }

    // Exibindo o resultado
    printf("O somatorio das fatoriais dos 15 valores e: %d", somatorio);

    return 0;
}
