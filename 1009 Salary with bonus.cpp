#include <bits/stdc++.h>

using namespace std;

int main() {
 
    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
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
