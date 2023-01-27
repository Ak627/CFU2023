#include<iostream>
#include<cmath>
using namespace std;


double pythagorean(int x, int y);

int main() {
	//if statements
	int c;
	cout << "How many cookies do you have: ";
	cin >> c;
	if (c < 5)
		cout << "You don't have enough cookies, here have one." << endl;
	else if (c < 10)
		cout << "You have a good amount of cookies." << endl;
	else
		cout << "Hey you have a lot of cookies, you should give me one!" << endl;

	cout << endl;
	
	char input;
	cout << "Who do you like the best, (b)art simpson, (s)cooby doo, (r)ick, (d)affy duck, or s(p)ongebob?" << endl;
	cin >> input;
	if (input == 'b')
		cout << "Eat my shorts" << endl;
	else if (input == 's')
		cout << "Scooby Dooby Doo!" << endl;
	else if (input == 'r')
		cout << "Wubba Lubba Dubba Dub DUb" << endl;
	else if (input == 'd')
		cout << "Sufferin' Succotash!" << endl;
	else if (input == 'p')
		cout << "I'm ready! I'm ready!" << endl;
	else
		cout << "That's not a character!" << endl;

	cout << endl;
	//switch statement
	int character = 1;
	char choice;
	bool end = true;
	do {
		switch (character) {
		case 1:
			cout << "Who do you like the best, (b)art simpson, (s)cooby doo, (r)ick, (d)affy duck, or s(p)ongebob?" << endl;
			cin >> choice;

			if (choice == 'b')
				character = 2;
			else if (choice == 's')
				character = 3;
			else if (choice == 'r')
				character = 4;
			else if (choice == 'd')
				character = 5;
			else if (choice == 'p')
				character = 6;
			else
				cout << "That's not a character!" << endl;
			break;
		case 2:
			cout << "Eat my shorts" << endl;
			end = false;
			break;
		case 3:
			cout << "Scooby Dooby Doo!" << endl;
			end = false;
			break;
		case 4:
			cout << "Wubba Lubba Dubba Dub DUb" << endl;
			end = false;
			break;
		case 5:
			cout << "Sufferin' Succotash!" << endl;
			end = false;
			break;
		case 6:
			cout << "I'm ready! I'm ready!" << endl;
			end = false;
			break;
		}
	} while (end != false);


	cout << endl;

	//nested if statements
	char p;
	cout << "Do you want (i)ce cream or (c)andy?" << endl;
	cin >> p;
	if (p == 'i') {
		cout << "Do you want c(h)ocolate or (f)ruit." << endl;
		cin >> p;
		if (p == 'h')
			cout << "You got a hot fudge sunday!" << endl;
		else if (p == 'f')
			cout << "You got a strawberry blizzard!" << endl;
	}
	if (p == 'c') {
		cout << "Do you want c(h)ocolate or (f)ruit." << endl;
		cin >> p;
		if (p == 'h')
			cout << "You got a hershey's bar!" << endl;
		else if (p == 'f')
			cout << "You got a starburst!" << endl;
	}


	int i;
	int j;
	cout << "Enter two sides of a triangle" << endl;
	cin >> i;
	cin >> j;
	cout << "The hypontenuse of your triangle is " << pythagorean(i, j) << endl;
}

double pythagorean(int x, int y) {
	double a = pow(x, 2) + pow(y, 2);
	return sqrt(a);
}
