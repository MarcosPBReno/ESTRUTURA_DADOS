 #include <iostream>
 using namespace std;
 
 nomes: vetor [1..10] de caracter;
 nome: caracter
 i: inteiro
 encontrou: logico
Inicio
 para i de 1 ate 10 faca
 escreval("Digite o ", i, "� nome")
 leia(nomes[i])
 fimpara
 escreval("Agora, digte um nome a ser buscado.")
 leia(nome)

 encontrou<-falso
 para i de 1 ate 10 faca
 se (nomes[i] = nome) entao
 encontrou<-verdadeiro
 fimse
 fimpara

 se (encontrou = verdadeiro) entao
 escreval("O nome encontra-se no vetor!")
 senao
 escreval("O nome n�o se econtra no vetor!")
 fimse
Fimalgoritmo
