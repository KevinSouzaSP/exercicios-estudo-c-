// inclui a biblioteca iostream
#include <iostream>

//importa a namespace da biblioteca std 
using namespace std;

// c++ possui somente uma fun��o "main"
//1� declara o tipo de retorno da fun��o
//2� declar a fun��o
//3� retornar 0 e finalizar o programa

int main(int argc, char *argv[])
{
	//declarando e inicializand variaveis
	int var1 = 11;
	int var2 = 15;

	//inicia o la�o if (se) se a var1 for menor que a var2 dois exibira uma megaem positiva
	if(var1 < var2)
	{
		cout << "Primerio if em c++" << endl;
	}
	//inicia o la�o if (se) se a var1 for maior que a var2 dois exibira uma megaem negativa
	else if(var1 > var2)
	{
		cout << "Primerio if em c++ fahou" << endl;
	}
	return 0;
}
