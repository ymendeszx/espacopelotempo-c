#include <stdio.h>
#include <stdlib.h>

float espaco(float v, float t, float a);

int main(int argc, char *argv[]) {
    float v, t, a;
    char resposta;
    float s;
    char saida[100];

    if (argc > 2) {
        v = atof(argv[1]);
        t = atof(argv[2]);
        if (argc > 3) {
            a = atof(argv[3]);
        } else {
            a = 0;
        }
    } else {
        printf("Digite a velocidade: ");
        scanf("%f", &v);
        printf("Digite o tempo: ");
        scanf("%f", &t);
        printf("Ha aceleracao? (s/n): ");
        scanf(" %c", &resposta);
        if (resposta == 's' || resposta == 'S') {
            printf("Digite a aceleracao: ");
            scanf("%f", &a);
        } else {
            a = 0;
        }
    }

    s = espaco(v, t, a);
    sprintf(saida, "O espaco percorrido e %.2f\n", s);
    printf("%s", saida);

    FILE *arquivo = fopen("espacopelotempo.txt", "w");
    if (arquivo != NULL) {
        fprintf(arquivo, "%s", saida);
        fclose(arquivo);
    }

    printf("Criado por Marcelo Mendes Sa");

    return 0;
}
