#include <bits/stdc++.h>

using namespace std;

int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    char EMPLOYEE;
 	double SALARY, SOLD, TOTAL;
 
 	scanf("%s", &EMPLOYEE);
 	scanf("%lf", &SALARY);
 	scanf("%lf", &SOLD);
 	
	TOTAL = SALARY + (SOLD * 15) / 100;
 	
	printf("TOTAL = R$ %.2f\n", TOTAL);
	
 
    return 0;
}
