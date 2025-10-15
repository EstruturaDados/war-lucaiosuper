#include <stdio.h>
#include <string.h>

#define QTD_TERRITORIOS 5

struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    struct Territorio territorios[QTD_TERRITORIOS];
    printf("===== CADASTRO DE TERRITORIOS DO JOGO WAR =====\n");
    printf("Por favor, insira os dados para os %d territorios.\n\n", QTD_TERRITORIOS);
    for (int i = 0; i < QTD_TERRITORIOS; i++) {
        printf("--- Cadastrando Territorio %d ---\n", i + 1);
        printf("Digite o nome do territorio: ");
        scanf(" %[^\n]", territorios[i].nome);
        printf("Digite a cor do exercito: ");
        scanf(" %[^\n]", territorios[i].cor);
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
        printf("\n"); 
    }
    printf("\n===== DADOS DOS TERRITORIOS CADASTRADOS =====\n\n");
    for (int i = 0; i < QTD_TERRITORIOS; i++) {
        printf("--- Territorio %d ---\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exercito: %s\n", territorios[i].cor);
        printf("Quantidade de Tropas: %d\n", territorios[i].tropas);
        printf("---------------------\n\n");
    }
    return 0;
}
