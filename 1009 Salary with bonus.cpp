#include <bits/stdc++.h>

using namespace std;

int main() {
 
    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
    char employee;
 	double salary, sold, final_sallary;
 
 	scanf("%s", &employee);
 	scanf("%lf", &salary);
 	scanf("%lf", &sold);
 	
	final_sallary = salary + (sold * 15) / 100;
 	
	printf("TOTAL = R$ %.2f\n", final_sallary);
	
 
    return 0;
}

