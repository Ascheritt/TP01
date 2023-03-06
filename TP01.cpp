#include <iostream>
using namespace std;

int main()
{
	string nome = "";
	int p1 = 0;
	int p2 = 0;
	float media = 0;

   cout << "Digite o nome do aluno\n";
   cin >> nome;
   cout << "Digite a nota da primeira prova\n";
   cin >> p1;
   while (p1 > 10 || p1 < 0) {
	   cout << "Digite um valor maior ou igual a 10 e menor ou igual a 0.\n";
	   cin >> p1;
   }
   cout << "Digite a nota da segunda prova\n";
   cin >> p2;
   while (p2 > 10 || p2 < 0) {
	   cout << "Digite um valor maior ou igual a 10 e menor ou igual a 0.\n";
	   cin >> p2;
   }

   media = (p1 + p2) / 2;

   cout << "A media eh:";
   cout << media;
   cout << ".\n";

   if (media >= 6) {
	   cout << "O aluno " + nome + " esta aprovado.";
   }

   else {
	   cout << "O aluno " + nome + " esta reprovado.";
   }
   
}
