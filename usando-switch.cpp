#include <iostream>

//importa a namespace da biblioteca std
using namespace std;

// c++ possui somente uma fun��o "main"
//1� declara o tipo de retorno da fun��o
//2� declar a fun��o
//3� retornar 0 e finalizar o programa
int main()
{
	//declara e inicia a variavel num
	int num = 2;

	//inicia o la�o switch recebendo o num que sera informado
	switch(num)
	{
		//caso o usuario informe '1' abrira o port�o
	case 1:
		cout << "Abrindo portao";
		break;
	//caso o usuario informe '2' fechara o port�o
	case 2:
		cout << "Fechando portao";
		break;
	//caso o usuario informe '3' ativara o alarme 
	case 3:
		cout << "ativando alarme";
		break;
	//caso o usuario informe '4' desativarea o alarme 
	case 4:
		cout << "Desativando alarme";
		break;
	//caso o usuario informe '5' estara informando que apenas desligou o alarme silencioso mas ele ira acionar a policia como metodo de prote�ao
	case 5:
		cout << "Desativando alarme silencioso";
		break;
		}
	return 0;
}
