#include <stdio.h>
#include <string.h>

#define qtdLivros 10
#define tituloLivro 100
#define nomeAutor 100
#define nomeEditora 100
#define TAM_TEMP 256

struct Livro {
    char titulo[tituloLivro];
    char autor[nomeAutor];
    char editora[nomeEditora];
    int anoPublicacao
    int qtdPaginas;
};

void lerStr(char *str, int count)
void lerLivro(struct Livro *livro)

int main(){
    struct Livro livros[qtdLivros];
    char titulo[tituloLivro];
    char autor[nomeAutor];
    char editora[nomeEditora];
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
  lerStr(livro->titulo, tituloLivro); 
  printf("Digite o autor(a): ");
  scanf("%c", &livro->autor);
  printf("Digite a editora: ");
  scanf("%c", &livro->editora); 
  printf("Digite o ano de publicacao do livro: ");
  scanf("%d", &livro->anoPublicacao);
  printf("Digite a quantidade de paginas no livro: ");
  scanf("%d", &livro->qtdPaginas);
  lerStr(tempStr, TAM_TEMP);
}

void imprimirLivro(struct Livro livro) {
  printf("(%s, %s, %s, %d, %d)\n",
    livro.titulo,
    livro.autor,
    livro.editora,
    livro.qtdPaginas,
    livro.anoPublicacao,
  );
}