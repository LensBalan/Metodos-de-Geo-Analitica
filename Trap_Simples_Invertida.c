//Autor: Leonardo Balan
//Trap_Simples_Repetida.c

#include <stdio.h>
#include <math.h>

double f(double x) { // Definição da função f(x) = x^3 + x^2 + 2
    return pow(x, 3) + pow(x, 2) + 2;
}

// Regra dos Trapézios simples e Repetida, caso n = 1 : simples
double Trap_simples_repet(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0;
    double x;

    for (int i = 1; i < n; i++) {
        x = a + i * h;
        sum += f(x);
    }

    return h * ((f(a) + f(b)) / 2 + sum);
}

int main() {
    double a = 0, b = 1; // Intervalo [0, 1]
    int n = 4; // Número de subdivisões de intervalo
    
    printf("======================================\n");
    printf("Regra dos Trapézios Simples: %lf\n\n", Trap_simples_repet(a, b, 1));
    printf("Regra dos Trapézios Repetida: %lf\n", Trap_simples_repet(a, b, n));
    printf("======================================\n");

    return 0;
}