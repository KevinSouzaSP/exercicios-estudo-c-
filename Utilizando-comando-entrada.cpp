#include <iostream>

//importa a namespace da biblioteca std
using namespace std;

// c++ possui somente uma fun��o "main"
//1� declara o tipo de retorno da fun��o
//2� declar a fun��o
//3� retornar 0 e finalizar o programa
int main()
{
	//declarando variaveis
	int num1, num2, resultado;
	char op; // opera��o
	
	cout << "Informe o primeiro numero" << endl;
	cin >> num1;
	cout << "Informe o segundo numero" << endl;
	cin >> num2;
	cout << "Informe a operacao que deseja realizar: " << endl;
	cin >> op;
	
	switch(op)
	{
	case '+':
		resultado = num1+num2;
		cout << "Soma: " << resultado << endl;
		break;
	case '-':
		resultado = num1-num2;
		cout << "Subtracao: " << resultado << endl;
		break;
	case '*':
		resultado = num1*num2;
		cout << "Multiplicacao: " << resultado << endl;
		break;
	case '/':
		resultado = num1/num2;
		cout << "Divisao: " << resultado << endl;
		break;
	default:
		cout << "Operacao inexistente " << endl;
		break;
	}
	
	return 0;
}