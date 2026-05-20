#ifndef FUNCTION_ESPACOPELOTEMPO_C
#define FUNCTION_ESPACOPELOTEMPO_C

double calcularEspaco(double velocidade, double tempo) {
    return velocidade * tempo;
}

double calcularEspacoComAceleracao(double velocidade, double tempo, double aceleracao) {
    return (velocidade * tempo) + (aceleracao * tempo * tempo) / 2.0;
}

#endif
