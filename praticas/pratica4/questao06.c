/*
6. Faça um programa em C que leia um verbo e imprima a conjugação no presente do indicativo caso ele termine em AR (ex.: PROGRAMAR, EU PROGRAMO, TU PROGRAMAS, ELE PROGRAMA, NÓS PROGRAMAMOS, VÓS PROGRAMAIS E ELES PROGRAMAM).
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char verbo[21];

  printf("Entre com um verbo terminado em AR: ");
  int deu_certo = scanf("%s", verbo);

  int tamanho = strlen(verbo);
  int ultima_letra = tamanho - 1;
  int penultima_letra = tamanho - 2;

  for(int i=0; i < tamanho; i++) { 
    verbo[i] = toupper(verbo[i]); // converte para MAIUSCULO
  }

  if (verbo[penultima_letra] == 'A' && verbo[ultima_letra] == 'R') {

  } else {
    printf("O verbo %s nao termina em AR!\n", verbo);
  }

  return 0;
}