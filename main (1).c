#include <stdio.h>
#include <stdlib.h>

const int MAX_CLIENTES = 5;

struct Cliente {
    char nome[50];
    int idade;
};


void criarCliente(struct Cliente *c) {
    printf("Digite o nome do cliente: ");
    scanf(" %[^\n]", c->nome);

    printf("Digite a idade do cliente: ");
    scanf("%d", &c->idade);
}


void imprimirCliente(struct Cliente *c) {
    printf("Nome: %s\n", c->nome);
    printf("Idade: %d\n", c->idade);
}

int main() {
    struct Cliente clientes[MAX_CLIENTES];
    int totalClientes = 0;
    int opcao;

    do {
        system("clear");
        printf("\n=== cadastrar cliente ===\n");
        printf("1 - Cadastrar cliente\n");
        printf("2 - Mostrar todos os clientes\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

         switch (opcao) {
              case 1:
                 if (totalClientes < MAX_CLIENTES) {
                    criarCliente(&clientes[totalClientes]);
                    totalClientes = totalClientes + 1;
                    printf("\nCliente cadastrado com sucesso!\n");
                } else {
                    printf("\nLimite de clientes atingido!\n");
                }
                sleep(2);
                break;

              case 2:
                if (totalClientes == 0) {
                    printf("\nNenhum cliente cadastrado ainda!\n");
                } else {
                    printf("\n=== LISTA DE CLIENTES ===\n");
                    for (int i = 0; i < totalClientes; i++) {
                        printf("\nCliente %d:\n", i + 1);
                        imprimirCliente(&clientes[i]);
                    }
                }
                sleep(5);
                break;

              case 0:
                printf("\nSaindo do programa...\n");
                sleep(2);
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                sleep(2);
        }

    } while (opcao != 0);

    return 0;
}
