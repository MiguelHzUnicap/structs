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
