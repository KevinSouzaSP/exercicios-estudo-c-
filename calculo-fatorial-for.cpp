#include <iostream>

//importa a namespace da biblioteca std
using namespace std;

// c++ possui somente uma fun��o "main"
//1� declara o tipo de retorno da fun��o
//2� declar a fun��o
//3� retornar 0 e finalizar o programa

int main(int argc, char *argv[])
{
	//declarando e iniciando variavel
	int num, i, fat = 1;
	

	//Solicitando e armazendo valor a variavel
	cout << "Digite um numero: ";
	cin >> num;

	//La�o for para calcular fatorial de um numero
	for(int i = 1; i < num ; i++)
		//declara que fatorial recebe o valor de fat (1) e multiplica por o valor de i + 1
		fat = fat * (i + 1);
		
		
		
	//exibe ao usuario a fatora��o
	cout << "o fatorial de: " << num << " e " << fat << endl;
	return 0;
}
