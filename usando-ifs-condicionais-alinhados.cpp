// inclui a biblioteca iostream
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
	//declara e inicia a variavel dinheiro
	int dinheiro = 10;
	
	//inicia o laço if 
	if(dinheiro > 15) {
		cout << " Irei ao cinema ";
	}else{
		 cout << " Nao irei ao cinema ";
	}
*/


/*	
	//declara e inicia a variavel num
	int num = 10;
	
	//if alinhado 
	if (num > 5){
		if (num <=10){
			cout << "Num e maior que 5 e menor ou igual a 10";
		}
	}
*/
	
/*
	//declara e inicia a variavel num
	int n =10;
	
	//If composto para saber se numero é par e menor que 20 
	if ((n % 2 == 0) && n <20){
		cout << "Numero informado e par e menor que 20";
	}
*/
	
	//declara e inicia a variavel num
	int number =13;
	
	//If composto para saber se numero é impar
	if (!(number % 2 == 0)){
		cout << "Numero informado e impar" << endl;
	}
	return 0;
}