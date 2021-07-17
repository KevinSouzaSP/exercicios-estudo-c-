// inclui a biblioteca iostream
#include <iostream>
#include "my_math.h"

//importa a namespace da biblioteca std
using namespace std;


int main()
{
	int n = 15;
	
	// "puxa" a funcao fatorial criada em my_math  e a executa com os parametros
	cout << "Fatorial de " << n << ": " << fatorial(n) << endl;
	// "puxa" a funcao area_quadrado criada em my_math  e a executa com os parametros
	cout << "Quadrado com lado " << n << ": " << area_quadrado(n) << endl;
	// "puxa" a funcao area_retangulo criada em my_math  e a executa com os parametros
	cout << "Area retangulo " << area_retangulo(n, n) << endl;
	return 0;
}
