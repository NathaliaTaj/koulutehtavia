#include <iostream>
#include <math.h>
#define NMAX 10
#define NMAX2 12


using namespace std;

void tulostaTahtia(int lukumaara);

bool alkuluku(long);

const int koko = 1000;

int main() {
	setlocale(LC_ALL, "");

	
	int tenttitulokset [NMAX];
	int summa = 0;
	
	cout << "Anna " << NMAX << " tenttitulosta\n";
	for (int i = 0; i < NMAX; i++) {
		cin >> tenttitulokset[i];
		summa += tenttitulokset[i];
	}
	cout << "\nSy�tit seuraavat tulokset: ";
	for (int i = 0; i < NMAX; i++) {

		cout << tenttitulokset[i] << " ";
	}
		
	int ka = summa / NMAX;

	cout << "\nTulosten keskiarvo on " << ka;

	int sademaara[NMAX2];

	cout << "\nAnna " << NMAX2 << " kuukauden sadem��r�t\n";
	for (int a = 0; a < NMAX2; a++) {
		cin >> sademaara[a];
	}
	for (int a = 0; a < NMAX2; a++) {
		cout << "\n";
		tulostaTahtia(sademaara[a]);
	}
	
	float luku1, luku2;
	char valinta;

	cout << "\nSy�t� kaksi lukua: \n";
	cin >> luku1;
	cin >> luku2;

	cout << "\nValitse 1, jos haluat lukujen summan\nValitse 2, jos haluat lukujen erotuksen\nValitse 3, jos haluat lukujen tulon\nValitse 4, jos haluat lukujen osamaaran.\n";
	cin >> valinta;

	switch (valinta) {

	case '1':

		cout << "\nLukujen summa on " << luku1 + luku2;
		break;
	case '2':

		cout << "\nLukujen erotus on " << luku1 - luku2;
		break;
	case '3':

		cout << "\nLukujen tulo on " << luku1 * luku2;
		break;
	case '4':

		cout << "\nLukujen osam��r� on " << luku1 / luku2;
		break;
	default:
		cout << "\nValitsit virheellisen toiminnon.";

	}
	
	for (int b = 0; b <= koko; b++) {
		
		alkuluku(b);
		if (alkuluku(b) == true) {
			cout << "\n " << b;
		}
	}
	
	
	cout << endl << endl;
	system("pause");
	return 0;
} void tulostaTahtia(int lukumaara) {

	char tahti = '*';
	for (int t = 1; t <= lukumaara; t++) {
		cout << tahti;
	}return;

}
bool alkuluku(long luku) {

	bool status;
	if (luku < 2) {
		return status = false;
  }
	if (luku == 2) {
		return status = true;
	}
	if (luku % 2 == 0 || luku % 3 == 0) {
		return status = false;
	}
	long neliojuuri = sqrt(luku);
	for (long i = 5; i <= neliojuuri;i++) {

		if (luku % i == 0 || luku % (i + 2) == 0) {
			return status = false;
		}
	}return status = true;
