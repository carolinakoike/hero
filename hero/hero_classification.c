#include <stdio.h>

int main() {
    char nome_heroi[50];
    int xp_heroi;

    printf("Digite o nome do herói: ");
    scanf("%s", nome_heroi);

    printf("Digite a quantidade de experiência do herói: ");
    scanf("%d", &xp_heroi);

    char nivel[20];
    switch (xp_heroi) {
        case 0 ... 1000:
            strcpy(nivel, "Ferro");
            break;
        case 1001 ... 2000:
            strcpy(nivel, "Bronze");
            break;
        case 2001 ... 5000:
            strcpy(nivel, "Prata");
            break;
        case 6001 ... 7000:
            strcpy(nivel, "Ouro");
            break;
        case 7001 ... 8000:
            strcpy(nivel, "Platina");
            break;
        case 8001 ... 9000:
            strcpy(nivel, "Ascendente");
            break;
        case 9001 ... 10000:
            strcpy(nivel, "Imortal");
            break;
        default:
            strcpy(nivel, "Radiante");
    }

    printf("O Herói de nome %s está no nível de %s\n", nome_heroi, nivel);

    return 0;
}
