#include <iostream>
using namespace std;

float virta(float jannite, float resistanssi) {

	float virta;

	virta = jannite / resistanssi;

	return virta;
}
float sulake(float teho) {

	float sulake;

	sulake = teho / 220;

	if (sulake >= 0 && sulake <= 10) {

		cout << "\nTarvitsemasi sulake on 10 A";

	}
	else if (sulake > 10 && sulake <= 16) {

		cout << "\nTarvitsemasi sulake on 16 A";
	}
	else if (sulake > 16 && sulake <= 20) {

		cout << "\nTarvitsemasi sulake on 20 A";

	}
	else {

		cout << "\nLaitteen taakse tarvitaan useampi sulake";

	}return teho;
}