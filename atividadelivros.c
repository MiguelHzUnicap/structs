#include <stdio.h>
#include <string.h>

#define QTD_LIVROS 10
#define TITULO_LIVRO 100
#define NOME_AUTOR 100
#define NOME_EDITORA 100
#define TAM_TEMP 256

struct Livro {
    char titulo[TITULO_LIVRO];
    char autor[NOME_AUTOR];
    char editora[NOME_EDITORA];
    int anoPublicacao
    int qtdPaginas;
};

void lerStr(char *str, int count)
void lerLivro(struct Livro *livro)

int main(){
    struct Livro livros[QTD_LIVROS];
    char titulo[TITULO_LIVRO];
    char autor[NOME_AUTOR];
    char editora[NOME_EDITORA];
    int qtdpaginas, anopublicacao;
}

    for (int i = 0; i < qtdLivros; i += 1)
    {
        printf("Informação Livro %d\n", i + 1);
        lerLivro(&livros[i]);
    }

    printf("\n\n");

    for (int i = 0; i < qtdLivros; i += 1) {
        printf("Impressão livro %d: ", i + 1);
        imprimirLivros(livros[i]);
    }

void lerStr(char *str, int count) {
  fgets(str, count, stdin);
  int tam = strlen(str);
  if (tam > 0 && str[tam - 1] == '\n') {
    str[tam - 1] = '\0';
  }

  void lerLivro(struct Livro *livro) {
  char tempStr[TAM_TEMP];
  printf("Digite o titulo do livro: ");
  lerStr(livro->titulo, TITULO_LIVRO); 
  printf("Digite o autor(a): ");
  lerStr(livro->autor, NOME_AUTOR);
  printf("Digite a editora: ");
  lerStr(livro->editora, NOME_EDITORA); 
  printf("Digite o ano de publicacao do livro: ");
  scanf("%d", &livro->anoPublicacao);
  printf("Digite a quantidade de paginas no livro: ");
  scanf("%d", &livro->qtdPaginas);
  lerStr(tempStr, TAM_TEMP);
}

void imprimirLivro(struct Livro livro) {
  printf("(%s, %s , %s, %d, %d)\n",
    livro.titulo,
    livro.autor,
    livro.editora,
    livro.qtdPaginas,
    livro.anoPublicacao,
  );
}

int buscarPelotTitulo(struct Livro v[], int tam, char *titulo) {
  for (int i = 0; i < tam; i += 1) {
    if (strcmp(v[i].titulo, titulo) == 0) {
      return i;
    }
  }
  return -1;
}

void ordenarLivroBubblesort (Struct Livro livro, int n) {
    int i, fim, pos, troca;
    float chave;
    
    troca = 1; fim = n - 2; pos = 0;
    while (troca == 1) {
        troca = 0;
        for (i = 0; i <= fim; i++) {
            if (livro.titulo[i] > livro.titulo[i+1]) {
                chave = v[i]; v[i] = v[i+1]; v[i+1] = chave;
                pos = i; troca = 1;
            }
        }
        fim = pos-1;
    }
}

//int buscaBinariaTitulo(int v[], int n, int x) {
  //int inicio = 0, fim = n - 1, meio;
  //while (inicio <= fim) {
    //meio = (inicio + fim) / 2;
    //if (strcmp(v[meio].titulo == x) {
      //return meio;
    //} else if (x < strcmp(v[meio].titulo) {
      //fim = meio - 1;
    //} else {
      //inicio = meio + 1;
    //}
  //}
  //return -1;
//}

int buscaBinariaTitulo(struct Livro v[], int tam, char *x) {
  int inicio = 0, fim = tam - 1, meio;
  while (inicio <= fim) {
    meio = (inicio + fim) / 2;
    if (strcmp(v[meio].titulo, x) > 0) {
      fim = meio - 1;
    } else if (strcmp(v[meio].titulo, x) < 0) {
      inicio = meio + 1;
    } else {
      return meio;
    }
  }
  return -1;
}
