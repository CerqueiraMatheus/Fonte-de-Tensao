#include <math.h>
#include <stdio.h>
#include <stdlib.h>

//Considerando o de silício
#define TENSAO_DIODO 0.65

//Entrada dada
#define TENSAO_ENTRADA 127.0
#define FREQUENCIA_ENTRADA 60.0

//Saída esperada
#define TENSAO_SAIDA 12.0
#define CORRENTE_SAIDA 0.1

//Ripple em Volts
#define RIPPLE 18.0

/**
 * 
 * Considerando o circuito sem o regulador
 * 
**/
int main() {
    double resistencia = TENSAO_SAIDA / CORRENTE_SAIDA;
    double tensaoPicoPrimario = TENSAO_ENTRADA * sqrt(2);
    double tensaoPicoSecundario = TENSAO_SAIDA + (2 * TENSAO_DIODO) + (0.5 * RIPPLE);
    double relacaoTransformacao = (tensaoPicoPrimario / tensaoPicoSecundario);

    double periodo = 1 / FREQUENCIA_ENTRADA;
    double tempoDeCarga = (periodo / (2 * M_PI)) * (acos((TENSAO_SAIDA - RIPPLE) / TENSAO_SAIDA));

    double capacitancia = (CORRENTE_SAIDA * ((periodo / 2) - tempoDeCarga)) / RIPPLE;

    double correnteDiodos = (capacitancia * RIPPLE) * ((1 / tempoDeCarga) + (1 / ((periodo / 2) - tempoDeCarga)));

    double correntePrimario = correnteDiodos * (1 / relacaoTransformacao);

    printf("=============================\n");
    printf("=============================\n");
    printf("=========RESULTADOS==========\n");
    printf("Resistência: %.1lfΩ\n", resistencia);
    printf("Capacitor: %.0lfµF\n", capacitancia * pow(10, 6));
    printf("Diodos: %.3lfA\n", correnteDiodos);
    printf("Transformador: %lf (%.1lfV/%.1lfV)\n", (1 / relacaoTransformacao), tensaoPicoSecundario, tensaoPicoPrimario);
    printf("=============================\n");
    printf("============PICOS============\n");
    printf("===PRIMÁRIO==================\n-corrente: %.1lfmA\n-tensão: %.2lfV\n", correntePrimario * 1000, tensaoPicoPrimario);
    printf("===SECUNDÁRIO================\n-corrente: %.1lfmA\n-tensão: %.2lfV\n", correnteDiodos * 1000, tensaoPicoSecundario);
    printf("=============================\n");
    printf("=============================\n");

    return EXIT_SUCCESS;
}