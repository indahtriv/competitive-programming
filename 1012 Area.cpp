#include <bits/stdc++.h>

using namespace std;

int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    float A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO, pi = 3.14159;
	
 	cin>>A>>B>>C;
	
	TRIANGULO = A * C / 2;
	CIRCULO = pi * C * C;
	TRAPEZIO = (A + B) * C / 2;
	QUADRADO = B * B;
	RETANGULO = A * B; 
	
	printf("TRIANGULO: %.2f\n", TRIANGULO);
	printf("CIRCULO: %.2f\n", CIRCULO);
	printf("TRAPEZIO: %.2f\n", TRAPEZIO);
	printf("QUADRADO: %.2f\n", QUADRADO);
	printf("RETANGULO: %.2f\n", RETANGULO);
 
    return 0;
}
