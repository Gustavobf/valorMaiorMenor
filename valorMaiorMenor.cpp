#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
 
	int num[5], maior, menor;
	int soma = 0;

	cout << "Informe 5 valores:" << endl;

	for (int e = 0; e < 5; e++) {
		cin >> num[e];

		if (e == 0) {
			maior = num[0];
			menor = num[0];
		}

		if (num[e] > maior)
			maior = num[e];

		if (num[e] < menor)
			menor = num[e];

		soma += num[e];
	}

	cout << "Maior valor informado: " << maior << endl;
	cout << "Menor valor informado: " << menor << endl;
	cout << "Soma dos valores: "      << soma << endl;

	system("pause");
	return 0;
}