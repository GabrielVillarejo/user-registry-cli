#include <stdio.h>
#include <string.h>
struct user {
    int id;
    char nome[50];
    int senha;
};

int main() {
    struct user Usuario[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Digite o ID: ");
        scanf("%d", &Usuario[i].id);
        getchar();

        printf("Digite o nome: ");
        fgets(Usuario[i].nome, 50, stdin);
        Usuario[i].nome[strcspn(Usuario[i].nome, "\n")] = '\0';

        printf("Digite a senha: ");
        scanf("%d", &Usuario[i].senha);
        getchar();
        printf("\n");
    }

    for (i = 0; i < 3; i++) {
        printf("ID: %d | Nome: %s | senha: %d\n", Usuario[i].id, Usuario[i].nome, Usuario[i].senha);
    }

    return 0;
}
