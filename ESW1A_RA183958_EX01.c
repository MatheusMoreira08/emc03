
/*
Author..: MATHEUS GUILHERME MOREIRA DE OLIVEIRA <matheusgmoreira1@gmail.com>
Date......: 10/05/2024
OB..........: Imprimir os valores ímpares entre 0 e 20.
*/
#include <stdio.h>
int main () {
  //variaveis
  int i;
  // loop 
  for ( i = 0; i <= 20; i++) {
    if (i % 2 != 0) { 
      printf("%d\n", i);
    }
  }
  return 0;
}