#include <iostream>

//importa a namespace da biblioteca std
using namespace std;

// c++ possui somente uma função "main"
//1º declara o tipo de retorno da função
//2º declar a função
//3º retornar 0 e finalizar o programa

int main(int argc, char *argv[])
{
	//declarando e iniciando variavel
	int num, i, fat = 1;
	

	//Solicitando e armazendo valor a variavel
	cout << "Digite um numero: ";
	cin >> num;

	//Laço for para calcular fatorial de um numero
	for(int i = 1; i < num ; i++)
		//declara que fatorial recebe o valor de fat (1) e multiplica por o valor de i + 1
		fat = fat * (i + 1);
		
		
		
	//exibe ao usuario a fatoração
	cout << "o fatorial de: " << num << " e " << fat << endl;
	return 0;
}
