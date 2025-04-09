#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Elabore um programa que manipule com informacoes de um texto armazenado em uma string de 20 posicoes.
  Apos a criacao da string crie outras strings para:
  Armazenar apenas as vogais da string original, OK
  armazenar a string ao inverso.OK
  Alem disso, crie um vetor com a quantidade de letras de cada palavra armazenada na string original. OK
  Observe mantenha a string original.
*/

char * inverso(char * s) {
  int tamanho = strlen(s) ;
  int c, i, j;

  for (i = 0, j = tamanho - 1; i < j; i++, j--) {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }

  return s;
}

int main(){
  char texto[20], vogais[20]={0};
  int i=0, countStringOriginal=0;

  printf("Digite o texto: ");
  gets(texto);

  for(i=0; i<=20; i++){
    if(texto[i]=='a' || texto[i]=='e' || texto[i]=='i' || texto[i]=='o' || texto[i]=='u'|| texto[i]=='A' || texto[i]=='E' || texto[i]=='I' || texto[i]=='O' || texto[i]=='U') {
      strncat(vogais, &texto[i], 1);
    }

    if((texto[i]>='A' && texto[i]<='Z')||(texto[i]>='a' && texto[i]<='z')){
      countStringOriginal++;
    }
  }

  printf("\n");
  printf("String original: %s", texto);
  printf("\nVogais: %s", vogais);
  printf("\nString inversa: %s", inverso(texto));
  printf("\nContador de letras das palavras na string original: %d", countStringOriginal);
  printf("\n");
}
