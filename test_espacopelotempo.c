#include <stdio.h>
#include <assert.h>
#include "function_espacopelotempo.c"

int main() {
    
    float resultado;

    printf("TESTES AUTOMATIZADOS\n");

    assert(calcular_espaco(80, 2, 0, 0) == 160.00);
    assert(calcular_espaco(40, 2, 0, 0) == 80.00);
    assert(calcular_espaco(40, 2, 1, 3) == 86.00);
   
    printf("Testes concluídos\n");
    printf("Criado por: Valentina Andrade de Pedro\n");

    return 0;
}
