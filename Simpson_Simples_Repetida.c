#include <stdio.h>
#include <math.h>

// Definição da função f(x)
double f(double x) {
    return pow(x, 3) + pow(x, 2) + 2;
}

// Regra 1/3 de Simpson Simples
double simpson1_3_simples(double a, double b) {
    double h = (b - a) / 2.0;
    double fa = f(a);
    double fb = f(b);
    double fm = f((a + b) / 2.0);
    return (h / 3.0) * (fa + 4.0 * fm + fb);
}

// Regra 1/3 de Simpson Repetida
double simpson1_3_repetida(double a, double b, int n) {
    double h = (b - a) / (double)n;
    double x, sum = f(a) + f(b);
    int i;
    for (i = 1, x = a + h; i < n; i++, x += h) {
        if (i % 2 == 0) {
            sum += 2.0 * f(x);
        } else {
            sum += 4.0 * f(x);
        }
    }
    return (h / 3.0) * sum;
}

int main() {
    double a = 0.0; //Intervalos
    double b = 1.0;
    int n = 4;    //subdivisões
    double integral_simples = simpson1_3_simples(a, b);
    double integral_repetida = simpson1_3_repetida(a, b, n);
    
    printf("==============================================================\n");
    printf("Regra 1/3 de Simpson Simples: %.10lf\n\n", integral_simples);
    printf("Regra 1/3 de Simpson Repetida com %d subdivisões: %.10lf\n", n, integral_repetida);
     printf("==============================================================\n");
     
    return 0;
    
}