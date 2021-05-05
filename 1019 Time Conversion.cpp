#include <bits/stdc++.h>

using namespace std;

int main() {
	
	/**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */ 
 
 	int d;
 	/*d = detik
	  m = menit
	  j = jam
	 */

 	cin>>d;

 	int j = d / 3600;
 	
 	d = d - (j * 3600);

 	int m = d / 60;
 	
 	d = d - (m * 60);

 	printf("%d:%d:%d\n", j, m, d);

 	return 0;
}
