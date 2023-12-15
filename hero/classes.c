#include <stdio.h>

struct Heroi {
    char nome[50];
    int idade;
    char tipo[20];
};

void atacar(struct Heroi *heroi) {
    char ataque[20];

    if (strcmp(heroi->tipo, "mago") == 0) {
        strcpy(ataque, "usou magia");
    } else if (strcmp(heroi->tipo, "guerreiro") == 0) {
        strcpy(ataque, "usou espada");
    } else if (strcmp(heroi->tipo, "monge") == 0) {
        strcpy(ataque, "usou artes marciais");
    } else if (strcmp(heroi->tipo, "ninja") == 0) {
        strcpy(ataque, "usou shuriken");
    } else {
        strcpy(ataque, "usou um ataque indefinido");
    }

    printf("O %s atacou usando %s\n", heroi->tipo, ataque);
}

int main() {
    struct Heroi meuHeroi = {"Gandalf", 100, "mago"};
    atacar(&meuHeroi);

    struct Heroi outroHeroi = {"Aragorn", 35, "guerreiro"};
    atacar(&outroHeroi);

    return 0;
}