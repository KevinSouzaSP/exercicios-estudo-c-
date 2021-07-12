#include <iostream>

//importa a namespace da biblioteca std
using namespace std;

// c++ possui somente uma função "main"
//1º declara o tipo de retorno da função
//2º declar a função
//3º retornar 0 e finalizar o programa
int main()
{
	//declara e inicia a variavel num
	int num = 2;

	//inicia o laço switch recebendo o num que sera informado
	switch(num)
	{
		//caso o usuario informe '1' abrira o portão
	case 1:
		cout << "Abrindo portao";
		break;
	//caso o usuario informe '2' fechara o portão
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
	//caso o usuario informe '5' estara informando que apenas desligou o alarme silencioso mas ele ira acionar a policia como metodo de proteçao
	case 5:
		cout << "Desativando alarme silencioso";
		break;
		}
	return 0;
}
