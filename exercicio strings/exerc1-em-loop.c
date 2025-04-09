#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Elabore um programa que manipule com informações de um texto armazenado em uma string de 20 posições.
  Após a criação da string crie outras strings para:
  Armazenar apenas as vogais da string original, OK
  armazenar a string ao inverso.OK
  Além disso, crie um vetor com a quantidade de letras de cada palavra armazenada na string original. OK
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
  char out = 'S';
  int rodadas=0;

  while(out != 'N') {
    fflush(stdin);
    char texto[20], vogais[20]={0};
    int i=0, countStringOriginal=0;

    printf("[%d]Digite o texto: ", rodadas);
    gets(texto);

    for(i=0; i<=20; i++){
      if(texto[i]=='a' || texto[i]=='e' || texto[i]=='i' || texto[i]=='o' || texto[i]=='u'|| texto[i]=='A' || texto[i]=='E' || texto[i]=='I' || texto[i]=='O' || texto[i]=='U') {
        strncat(vogais, &texto[i], 1);
      }

      if((texto[i]>='A' && texto[i]<='Z') || (texto[i]>='a' && texto[i]<='z')){
        countStringOriginal++;
      }
    }

    printf("\n[%d]String original: %s", rodadas, texto);
    printf("\n[%d]Vogais: %s", rodadas, vogais);
    printf("\n[%d]String inversa: %s", rodadas, inverso(texto));
    printf("\n[%d]Contador de letras das palavras na string original: %d", rodadas, countStringOriginal);

    printf("\n\nDigite um caracter/enter para continuar. [N] para sair: ");
    scanf("%c", &out);
    printf("\n");
    rodadas++;
  }
}
