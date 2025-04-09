#include <stdio.h>
#include <string.h>

#define MAXC 255
#define KEY_ENCRYPTION 5

void criptografaArquivo(char nome_arquivo[]) {
  FILE *arquivo = fopen(nome_arquivo, "r+");
  char guardarArquivo[MAXC], crip[MAXC];
  int c = 0;

  char nome_arquivo_cripto [200] = "criptografado_";
  strcat(nome_arquivo_cripto,nome_arquivo);

  printf("\n~ Nome do novo arquivo criptogrfado: %s\n", nome_arquivo_cripto);

  if(arquivo!= NULL) {
    if (fgets(guardarArquivo, MAXC, arquivo) == NULL) {
      printf("\nNao foi possivel ler nada do arquivo.");
    }

    fclose(arquivo);
  } else {
    printf("\nNao foi possivel abrir o arquivo.");
  }

  if(guardarArquivo != '\0') {
    while (guardarArquivo[c] != '\0') {
      crip[c] = guardarArquivo[c] + KEY_ENCRYPTION;
      c++;
    }

    crip[c] = '\0';
    printf("\n~ Texto criptografado: %s\n", crip);

    printf("\n~ Fechando programa!\n");

    arquivo = fopen(nome_arquivo_cripto,"w+");
    rewind(arquivo);
    fputs(crip,arquivo);
    fclose(arquivo);

  } else {
    printf("Nao ha nada no arquivo para ser lido.");
  }
}

void tiraEspacoESalvaNoArquivo(char nome_arquivo[]) {
  FILE *arquivo = fopen(nome_arquivo, "r+");
  char guardarArquivo[MAXC], blank[MAXC];
  int d = 0, c = 0;

  if(arquivo!= NULL) {
    if (fgets (guardarArquivo, MAXC, arquivo) == NULL) {
      printf("\nNao foi possivel ler nada do arquivo.");
    }

    fclose(arquivo);
  } else {
    printf("\nNao foi possivel abrir o arquivo.");
  }

  if(guardarArquivo != '\0') {
    while (guardarArquivo[c] == ' '){
        c++;
      }

    while (guardarArquivo[c] != '\0') {
      if (!(guardarArquivo[c] == ' ' && guardarArquivo[c+1] == ' ')) {
        blank[d] = guardarArquivo[c];
        d++;
      }
      c++;
    }

    if (guardarArquivo[c-1] == ' '){
      blank[d-1] = '\0';
    }

    blank[d] = '\0';

    freopen(nome_arquivo, "w", arquivo);
    fputs(blank, arquivo);
    rewind(arquivo);
    fclose(arquivo);

  } else {
    printf("\nNao ha nada no arquivo para ser lido.");
  }
}


void abrirArquivoEReceberString(char nome_arquivo[], char opcao_abertura_arq[]) {
  strcat(nome_arquivo, ".txt");
  char caracter_arquivo[255];
  FILE *arquivo;

  arquivo = fopen(nome_arquivo, opcao_abertura_arq);

  if(arquivo != NULL) {
    fflush(stdin);
    fputc(' ', arquivo);

    printf("-> Digite o texto: [ENTER para salvar] -> ");
    gets(caracter_arquivo);
    fputs(caracter_arquivo, arquivo);

    rewind(arquivo);
    fclose(arquivo);

    tiraEspacoESalvaNoArquivo(nome_arquivo);
    criptografaArquivo(nome_arquivo);

  } else {
    printf("\nNao foi possivel abrir o arquivo.");
  }
}

int main(void) {
  char nome_arquivo[50], opcao_abertura_arq[2];
  int opcao_menu;

  printf("Trabalho de algoritmos e programacao II!\n");
  printf("\n-> Digite o nome do arquivo: ");
  gets(nome_arquivo);
  fflush(stdin);

  printf("\nMenu: \n");
  printf("[1] Escrever no final do arquivo \n");
  printf("[2] Subescrever\n");
  printf("\n-> Escolha: ");
  scanf("%d", &opcao_menu);
  printf("\n");

  switch(opcao_menu) {
    case 1:
      opcao_abertura_arq[0] = 'a';
      abrirArquivoEReceberString(nome_arquivo,opcao_abertura_arq);
      break;
    case 2:
      opcao_abertura_arq[0] = 'w';
      abrirArquivoEReceberString(nome_arquivo,opcao_abertura_arq);
      break;
    default:
      printf("\nOpcao invalida! Fechando programa.");
      break;
  }

  return 0;
}
