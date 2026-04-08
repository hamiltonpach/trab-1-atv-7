#include <stdio.h>
#include <string.h>

#define TOTAL 5

struct Livro {
    char titulo[31];
    char autor[16];
    int ano;
};

int main() {
    struct Livro livros[TOTAL];
    char busca[31];
    int i, encontrado = 0;

    // Leitura dos dados
    for(i = 0; i < TOTAL; i++) {
        printf("\nLivro %d\n", i + 1);

        printf("Titulo: ");
        scanf(" %[^\n]", livros[i].titulo);

        printf("Autor: ");
        scanf(" %[^\n]", livros[i].autor);

        printf("Ano: ");
        scanf("%d", &livros[i].ano);
    }

    // Busca por título
    printf("\nDigite o titulo que deseja buscar: ");
    scanf(" %[^\n]", busca);

    printf("\nResultados encontrados:\n");

    for(i = 0; i < TOTAL; i++) {
        if(strcmp(livros[i].titulo, busca) == 0) {
            printf("\nTitulo: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano: %d\n", livros[i].ano);
            encontrado = 1;
        }
    }

    if(!encontrado) {
        printf("Nenhum livro encontrado com esse titulo.\n");
    }

    return 0;
}