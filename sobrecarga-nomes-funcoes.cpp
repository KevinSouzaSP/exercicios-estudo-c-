// inclui a biblioteca iostream
#include <iostream>

//importa a namespace da biblioteca std
using namespace std;

//c++ possibilita o uso de duas funções com o mesmo nome porem com parametros diferentes


//executa uma função chamada "soma" que recebe os parametros de n1 e n2
int soma (int n1, int n2){
	// retorna a soma de n1 e n2
	return n1 + n2;
}

//executa uma função  com o mesmo nome de "soma" que recebe os parametros de n1 e n2
int soma (int n1, int n2, int n3){
	// retorna a soma de n1, n2 e n3
	return n1 + n2 + n3;
}

int main()
{
	//informa o valor das variaveis n1 e n2 da primeira funcao
	cout << soma(1,2) << endl;
	//informa o valor das variaveis n1, n2 e n3 da segunda funcao
	cout << soma(1,2, 4) << endl;
	return 0;
}