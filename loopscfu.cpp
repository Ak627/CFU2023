#include<iostream>
using namespace std;

int main() {
	cout << "For loop problems: " << endl;

	for (int i = 4; i <= 44; i += 5) {
		cout << i << " ";
	}
	
	cout << endl;

	for (int i = 100; i >= 20; i -= 10) {
		cout << i << " ";
	}

	cout << endl;

	for (int i = 2; i <= 200; i *= 2) {
		cout << i << " ";
	}

	cout << endl;
	cout << endl;

	cout << "While loop problems: " << endl;
	int x = 3;
	while (x < 33) {
		cout << x << " ";
		x += 5;
		
	}
	cout << endl;
	char input;
	cout << "DONUT" << endl;
	cout << "Would you like another donut" << endl;
	cin >> input;

	while (input == 'y') {
		cout << "DONUT" << endl;
		cout << "Would you like another donut?" << endl;

		cin >> input;

	}
	cout << "Goodbye then :(" << endl;
}
