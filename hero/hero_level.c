#include <stdio.h>

void calcular_nivel(int vitorias, int derrotas, int *saldo, char *nivel) {
    *saldo = vitorias - derrotas;

    if (vitorias < 10) {
        *nivel = 'F';
    } else if (vitorias >= 11 && vitorias <= 20) {
        *nivel = 'B';
    } else if (vitorias >= 21 && vitorias <= 50) {
        *nivel = 'P';
    } else if (vitorias >= 51 && vitorias <= 80) {
        *nivel = 'O';
    } else if (vitorias >= 81 && vitorias <= 90) {
        *nivel = 'D';
    } else if (vitorias >= 91 && vitorias <= 100) {
        *nivel = 'L';
    } else {
        *nivel = 'I';
    }
}

int main() {
    int vitorias, derrotas, saldo;
    char nivel;

    printf("Digite a quantidade de vitórias: ");
    scanf("%d", &vitorias);

    printf("Digite a quantidade de derrotas: ");
    scanf("%d", &derrotas);

    calcular_nivel(vitorias, derrotas, &saldo, &nivel);

    printf("O Herói tem um saldo de %d em partidas ranqueadas e está no nível de ", saldo);

    switch (nivel) {
        case 'F':
            printf("Ferro\n");
            break;
        case 'B':
            printf("Bronze\n");
            break;
        case 'P':
            printf("Prata\n");
            break;
        case 'O':
            printf("Ouro\n");
            break;
        case 'D':
            printf("Diamante\n");
            break;
        case 'L':
            printf("Lendário\n");
            break;
        case 'I':
            printf("Imortal\n");
            break;
        default:
            printf("Desconhecido\n");
    }

    return 0;
}