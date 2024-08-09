/*
Author..: MATHEUS GUILHERME MOREIRA DE OLIVEIRA <matheusgmoreira1@gmail.com>
Date......: 10/05/2024
OB..........: Imprimir os números divisíveis por 4 menores que 200.
*/

#include <stdio.h>

int main() {
    int contador = 1;

    printf("Imprimir os numeros divisiveis por 4 menores que 200");

    printf("Numeros divisiveis por 4 menores que 200:");
    while (contador < 200) {
        if (contador % 4 == 0) {
            printf("%d", contador);
        }
        contador++;
    }
  return 0;
}