//chp4ex3.cpp

#include <iostream>
#include <iomanip>
#include <cmath>

const int MAX = 1000;

using namespace std;

int main() {

	const int pad = long(MAX * MAX) + 2;

	for (int i = 1; i <= MAX; i++) {
		cout << i << setw(15);
	}

	cout << endl << setw(0);

	for (int i = 1; i <= MAX; i++) {
		cout << i * i << setw(15);
	}
	cout << endl;

	return 0;
}