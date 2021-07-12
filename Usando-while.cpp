#include <iostream>

//importa a namespace da biblioteca std
using namespace std;

// c++ possui somente uma função "main"
//1º declara o tipo de retorno da função
//2º declar a função
//3º retornar 0 e finalizar o programa
int main()
{
	/*
	// declarando variaveis
	int num=-10;

	// iniciando laço while enquanto num for menor ou igual a 100
	while (num <= 100){
		//laço 'se' para mostrar somente os numeros pares, ignorando os impares
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

	// iniciando laço while enquanto n for menor ou igual a 10
	while (n <= 10)
	{
		// declarando e inicializando variaveis
		int i = 0;
		// iniciando laço while para imprimir 3 vezes o numero
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
