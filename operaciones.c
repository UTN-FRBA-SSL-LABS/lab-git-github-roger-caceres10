#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */
//Recibe dos enteros y retorna su suma
int sumar(int a, int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */
//Recibe dos enteros y retorna su diferencia
int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
//Recibe dos enteros y retorna su producto
int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */
//Recibe un entero y retorna 1 si es par, 0 si es impar
int esPar(int n) {
    return (n % 2) == 0; /*version main*/ 
}
