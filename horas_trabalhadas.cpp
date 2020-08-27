#include <iostream>
using namespace std;

int main() {
  float salarioMin, horasTrabalhadas, salarioFinal, valorHora, salarioBruto;
  cout << "Insira o Salário minimo: ";
  cin >> salarioMin;
  cout << "Total de horas trabalhadas: ";
  cin >> horasTrabalhadas;
  valorHora= salarioMin/2;
  salarioBruto= horasTrabalhadas*valorHora;
  salarioFinal= salarioBruto*0.97;
  cout << "Salario liquido: " << salarioFinal;
  return 0;
}