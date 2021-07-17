// inclui a biblioteca iostream
#include <iostream>

//importa a namespace da biblioteca std
using namespace std;

//cria uma função booleana ( que recebe True e false ) chamada par que recebe os parametros de num
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

// c++ possui somente uma função "main"
//1º declara o tipo de retorno da função
//2º declar a função
//3º retornar 0 e finalizar o programa
int main()
{
	//declara variavel num
	int num ;
	//pede ao usuario que informe o numero que deseja verificar se é impar ou par
	cout << "Informe um numero: ";
	//recebe o valor informado
	cin >> num;

	//executa a operação que recebe o valor de par apos passar peço primeiro if e exibe se é impar ou par
	if (par(num)){
		cout << "O numero " << num << " e par" << endl;
	}	
	else
	{
		cout << " o numero " << num << " e impar ";
	}
	return 0;
}
