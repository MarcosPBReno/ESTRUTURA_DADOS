#include <iostream>
#include <string>

using namespace std;

struct pessoa
{
	string cpf;
	int idade;
	string nome;
	string endereco;
	
};

int main(int argc, char** argv)
{
	int j = 0;
	pessoa p[5];

	for(j; j < 5; j++)
	{  
		cout << "Qual o seu nome: " << j + 1 << ": ";
		
		getline(cin, p[j].nome);
		

		cout << "Qual o seu endereco: " << j + 1 << ": ";
		getline(cin, p[j].endereco);

		cout << "Qual o seu cpf: " << j + 1 << ": ";
		cin >>  p[j].cpf;

		cout << "Qual a sua idade: " << j + 1 << ": ";
		cin >>  p[j].idade;
		
		cin.ignore();

		cout<<"-----"<< endl;
	}
	
	cout << endl;
	cout << "==DADOS SALVOS===" << endl;
	cout << endl;
	
	for(j = 0; j < 5; j++)
	{
		cout << "Qual o seu nome: " << j+1 << ": " << p[j].nome << endl;
		cout << "Qual o seu endereco " << j+1 << ": " << p[j].endereco << endl;
		cout << "Qual o seu cpf: " << j+1 << ": " << p[j].cpf << endl;
		cout << "Qual a sua idade: " << j+1 << ": " << p[j].idade << endl;
		
		cout << "----------" << endl;
	}

	return 0;
}
