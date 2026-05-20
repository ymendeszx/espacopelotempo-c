#include <stdio.h>
#include "function_espacopelotempo.c"

int main() {
    double velocidade, tempo, aceleracao;
    char resposta;

    printf("Digite a velocidade: ");
    scanf("%lf", &velocidade);

    printf("Digite o tempo: ");
    scanf("%lf", &tempo);

    printf("Ha aceleracao? (s/n): ");
    scanf(" %c", &resposta);

    double espaco;
    if (resposta == 's' || resposta == 'S') {
        printf("Digite a aceleracao: ");
        scanf("%lf", &aceleracao);
        espaco = calcularEspacoComAceleracao(velocidade, tempo, aceleracao);
    } else {
        espaco = calcularEspaco(velocidade, tempo);
    }

    printf("Espaco percorrido: %.2f\n", espaco);

    printf("Criado por Marcelo Mendes");
    return 0;
}
