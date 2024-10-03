#include <iostream>
#include <cmath>

// Función de pérdida cuadrática
double loss_function(double x) {
    return std::pow(x - 3, 2);
}

// Gradiente de la función de pérdida
double gradient(double x) {
    return 2 * (x - 3);
}

// Algoritmo de gradiente descendente
double gradiente_descendente(double x0, double alpha = 0.1, int max_iter = 100) {
    double x = x0;
    for (int i = 0; i < max_iter; ++i) {
        double grad = gradient(x);
        x = x - alpha * grad;
        std::cout << "Iteración " << i + 1 << ": x = " << x << ", pérdida = " << loss_function(x) << std::endl;
    }
    return x;
}

int main() {
    double x0 = 10.0;
    double minimo = gradiente_descendente(x0);
    std::cout << "Mínimo encontrado en: " << minimo << std::endl;
    return 0;
}