#include <iostream>

//importa a namespace da biblioteca std
using namespace std;

// c++ possui somente uma fun��o "main"
//1� declara o tipo de retorno da fun��o
//2� declar a fun��o
//3� retornar 0 e finalizar o programa
int main()
{
	/*
	// declarando variaveis
	int num=-10;

	// iniciando la�o while enquanto num for menor ou igual a 100
	while (num <= 100){
		//la�o 'se' para mostrar somente os numeros pares, ignorando os impares
		if (num % 2 != 0){
			num++;
			continue;

		}

		cout << num << endl;
		num ++;
	}
	*/
	// declarando e inicializando variaveis
	int n = 1;

	// iniciando la�o while enquanto n for menor ou igual a 10
	while (n <= 10)
	{
		// declarando e inicializando variaveis
		int i = 0;
		// iniciando la�o while para imprimir 3 vezes o numero
		while (i < 2)
		{
			// exibe o numero
			cout << "Numero: " << n << endl;
			// incrementa 1 a i
			i++;
		}
		//incrementa 1 a n
		n++;
	}

	return 0;
}
