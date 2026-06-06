#include <stdio.h>
#include "function_espacopelotempo.c"

int main() {
    float velocidade, tempo, aceleracao = 0.0, espaco;
    int resposta_aceleracao;

    printf("ESPAÇO PELO TEMPO\n");
    
    printf("Digite a velocidade (v): ");
    scanf("%f", &velocidade);

    printf("Digite o tempo (t): ");
    scanf("%f", &tempo);

    printf("Há aceleração? (1 - Sim / 0 - Não): ");
    scanf("%d", &resposta_aceleracao);

    if (resposta_aceleracao == 1) {
        printf("Digite o valor da aceleração (a): ");
        scanf("%f", &aceleracao);
    }

    espaco = calcular_espaco(velocidade, tempo, resposta_aceleracao, aceleracao);

    printf("\nA distância percorrida (S) é: %.2f\n", espaco);
    printf("\nCriado por: Valentina Andrade de Pedro");

    return 0;
}
