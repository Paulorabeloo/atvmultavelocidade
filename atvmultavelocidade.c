#include <stdio.h>
int main() {
    float vveiculo, vvia, diferenca, multa = 0;
    int pontos;
    printf("Digite a velocidade que você estava quando passou pelo radar:\n");
    scanf("%f", &vveiculo);
    printf("Digite a velocidade da via:\n");
    scanf("%f", &vvia);
    diferenca = vveiculo / vvia;
    if (diferenca > 1) {
        if (diferenca < 1.21) {
            multa = 85.13;
            pontos = 4;
        }
        else if (diferenca <= 1.5) {
            multa = 127.69;
            pontos = 5;
        }
        else {
            multa = 574.62;
            pontos = 7;
        }
    }
    printf("Multa no valor de: %.2f R$.\nPontos na carteira de habilitação: %i\n", multa, pontos);
    return 0;
}

