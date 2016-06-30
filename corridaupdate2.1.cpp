// Tema 3 - Jogo de Corrida.
#include <iostream>
#include <string>
#include<ctime>
#include<stdlib.h>
using namespace std;

// Identificador da função 'imprimir_espaços para eu saber os "super poderes" que eu posso usar.
void imprimir_espacos(int total);

int main()
{
	// Quantidade Total de Espaços.
	int total_espacos = 50, andar1 = 0, andar2 = 0;
		//Nome dos jogadores
	string name_jog1, name_jog2;
	//Colocar o nome dos 2 jogadores
	cout << "Digite o nome do jogador 1" << endl;
	cin >> name_jog1;
	cout << "Digite o nome do jogador 2" << endl;
	cin >> name_jog2;
	

	/*
	*	Laço para as rodadas do jogo. 
	*	A cada rodada o carro do jogador anda 1 (um) espaço.
	*
	*	Rodada		Carro
	*	0			 s
	*   1			  s
	*   2			   s
	*   3			    s
	*	...			...
	*   9			          s
	*
	*/
	int rodada = 0;
	while (andar1 <= total_espacos && andar2 <= total_espacos)
	{
		// Mostra em tela o Letreiro do Jogo.
		cout << "Jogo de Corrida    Jogador 1" << name_jog1 << "x Jogador 2" << name_jog2 << endl;
		// Mostra em tela o cartaz de fim de pista. 
		imprimir_espacos(total_espacos);
		cout << "|CHEGADA|" << endl;
		
		srand((int)time(0));
		andar1 = rand() % 3 + 1 + andar1;	
		andar2 = rand() % 3 + 1 + andar2;


		// Jogador 1: 
		//	a) Coloca uma quantidade de espaços dependendo da rodada.
		//  b) Mostra o carro do jogador 1.
		cout << name_jog1 << endl; 
		imprimir_espacos(andar1);
		cout << "  _  " << endl;
		imprimir_espacos(andar1);
		cout << "-o-o>" << endl; 
	
		
		for (int cont = 0; cont < total_espacos; cont++) cout << "~";
		cout << endl;
		//Jogador 2:
		// a) Coloca uma quantidade de espaços dependendo da rodada
		//b) Mostra o carro do jogador 2
		cout << name_jog2 << endl;
		imprimir_espacos(andar2);
		cout << "  _  "<< endl;
		imprimir_espacos(andar2);
		cout << "-o-o>" << endl;
		
	

		// Limpa a tela para mostrar a próxima rodada.
		system("pause");
		system("cls");	
		
		
		// Passa para a próxima rodada do laço.
		rodada++;
	}

	return 0;
}

/*
*	A função serve pra mostrar espaços em branco na tela.
*	
*	int total : Quantidade de espaços que serão mostrados.
*
*/
void imprimir_espacos(int total)
{
	// Imprime espaços de 'qntd_atual' até 'total'.
	for (int qntd_atual = 0; qntd_atual < total; qntd_atual++)
	{
		cout << " ";
	}
}

