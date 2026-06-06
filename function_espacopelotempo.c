#include <stdio.h>

float calcular_espaco(float v, float t, int tem_aceleracao, float a)
{
if (tem_aceleracao == 1) {
        return (v * t) + ((a * t * t) / 2.0);
    } else {
        return v * t;
    }
}
