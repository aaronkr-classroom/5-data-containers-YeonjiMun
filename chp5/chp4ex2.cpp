//chp4ex2.cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int i;

	for (i = 1; i <= 100; i++) {
		cout << i << setw(4);
	}

	cout << endl << setw(4);

	for (i = 1; i <= 100; i++) {
		cout << i * i << setw(10);
	}
	cout << endl;

	return 0;
}