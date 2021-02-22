#include <bits/stdc++.h>

using namespace std;

int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO, pi = 3.14159;
	
 	cin>>A>>B>>C;
	
	TRIANGULO = A * C / 2;
	CIRCULO = pi * C * C;
	TRAPEZIO = (A + B) * C / 2;
	QUADRADO = B * B;
	RETANGULO = A * B; 
	
	printf("TRIANGULO: %.3lf\n", TRIANGULO);
	printf("CIRCULO: %.3lf\n", CIRCULO);
	printf("TRAPEZIO: %.3lf\n", TRAPEZIO);
	printf("QUADRADO: %.3lf\n", QUADRADO);
	printf("RETANGULO: %.3lf\n", RETANGULO);
 
    return 0;
}
