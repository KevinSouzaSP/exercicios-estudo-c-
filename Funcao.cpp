// inclui a biblioteca iostream
#include <iostream>

//importa a namespace da biblioteca std
using namespace std;

//cria uma fun��o booleana ( que recebe True e false ) chamada par que recebe os parametros de num
bool par(int num)
{
	// executa um if para verificar se numero sera par ou impar
	if (num % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}


}

// c++ possui somente uma fun��o "main"
//1� declara o tipo de retorno da fun��o
//2� declar a fun��o
//3� retornar 0 e finalizar o programa
int main()
{
	//declara variavel num
	int num ;
	//pede ao usuario que informe o numero que deseja verificar se � impar ou par
	cout << "Informe um numero: ";
	//recebe o valor informado
	cin >> num;

	//executa a opera��o que recebe o valor de par apos passar pe�o primeiro if e exibe se � impar ou par
	if (par(num)){
		cout << "O numero " << num << " e par" << endl;
	}	
	else
	{
		cout << " o numero " << num << " e impar ";
	}
	return 0;
}
