#include <stdio.h>
double calcularSerie(int n) {
    double resultado = 0.0;
    for (int i = 1; i <= n; i++) {
        
        double termo = (double)i / (i * i);

        
        if (i % 2 == 0) {
            resultado -= termo;
        } else {
            resultado += termo;
        }
    }
    return resultado;
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    double resultado = calcularSerie(n);
    printf("O resultado da série para n = %d é: %.6f\n", n, resultado);

    return 0;
}