#include <stdio.h>
#include <assert.h>
#include <math.h>

float espaco(float v, float t, float a);

int main(void) {
    assert(fabs(espaco(80, 2, 0) - 160.0) < 0.01);
    assert(fabs(espaco(40, 2, 0) - 80.0) < 0.01);
    assert(fabs(espaco(40, 2, 3) - 86.0) < 0.01);

    printf("Todos os testes passaram!\n");
    printf("Criado por Marcelo Mendes Sa");

    return 0;
}
