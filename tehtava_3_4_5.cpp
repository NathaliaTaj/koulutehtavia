#include <iostream>
#include "esittelyt.h";
#include <stdlib.h> 
#include <time.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "");

	float luku1, luku2, tulos, teho;

	cout << "Syötä jännite: ";
	cin >> luku1;
	cout << "\nSyötä resistanssi: ";
	cin >> luku2;

	tulos = virta(luku1, luku2);

	cout << "\nPiirissä kulkeva virta on " << tulos;

	cout << "\n\nSyötä laitteen kuluttama teho: ";
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
