#include <iostream>
#include "esittelyt.h";
#include <stdlib.h> 
#include <time.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "");

	float luku1, luku2, tulos, teho;

	cout << "Sy�t� j�nnite: ";
	cin >> luku1;
	cout << "\nSy�t� resistanssi: ";
	cin >> luku2;

	tulos = virta(luku1, luku2);

	cout << "\nPiiriss� kulkeva virta on " << tulos;

	cout << "\n\nSy�t� laitteen kuluttama teho: ";
	cin >> teho;
	sulake(teho);

	srand(time(NULL));

	cout << "\n\nLoton voittonumerot ovat ";

	for (int n = 1; n <= 7; n++) {

		int luku = rand() % 40 + 1;
		cout << luku << ", ";

	}

	cout << endl << endl;
	system("pause");
	return 0;
}
