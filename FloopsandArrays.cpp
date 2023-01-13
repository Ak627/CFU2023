#include<iostream>
using namespace std;

int main() {
	cout << "Mild problems: " << endl;
	for (int i = 50; i <= 70; i += 2) {
		cout << i << " ";
	}
	cout << endl;
	cout << endl;
	for (int i = 100; i >= 50; i -= 5) {
		cout << i << " ";
	}
	cout << endl;
	cout << endl;
	for (int i = 2; i <= 2048; i *= 5) {
		cout << i << " ";
	}
	cout << endl;
	cout << endl;
	cout << "Medium Problems: " << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 6; j++)
			cout << "*";
		cout << endl;
	}
	cout << endl;
	cout << endl;
	for (int i = 0; i < 5; i++) {
		for (int i = 1; i <= 4; i++) {
			cout << i << ", ";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	cout << "Spicy Problems: " << endl;
	int num[8];
	for (int i = 0; i < 8; i++) {
		num[i] = rand() % 20;
	}
	cout << "Array: ";
	for (int i = 0; i < 8; i++) {
		cout << num[i] << " ";
	}
	cout << endl;
	int big = num[0];
	for (int i = 0; i < 8; i++) {
		if (num[i] > big) {
			big = num[i];
		}
	}
	cout << "The biggest number is: " << big << endl;
	int small = num[0];
	for (int i = 0; i < 8; i++) {
		if (num[i] < small) {
			small = num[i];
		}
	}
	cout << "The smallest number is: " << small << endl;
	int range = big - small;
	cout << "The range of numbers is: " << range << endl;
	float sum = 0;
	for (int i = 0; i < 8; i++) {
		sum += num[i];
	}
	float average = sum /= 8;
	cout << "The average of the array is: " << average << endl;
}
