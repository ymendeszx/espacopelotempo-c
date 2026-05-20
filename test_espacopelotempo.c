#include <stdio.h>
#include "function_espacopelotempo.c"

int main() {
    printf("Testando espaco pelo tempo:\n");

    printf("S(v=80, t=2) = %.2f\n", calcularEspaco(80, 2));

    printf("S(v=40, t=2) = %.2f\n", calcularEspaco(40, 2));

    printf("S(v=40, t=2, a=3) = %.2f\n", calcularEspacoComAceleracao(40, 2, 3));

    printf("Criado por Marcelo Mendes");
    return 0;
}
