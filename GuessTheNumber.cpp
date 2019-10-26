#include <iostream>
#include <cstdlib>
#include<time.h>
using namespace std;

int main() {
	srand(time(0));
	int number = rand() % 100;
	int guess;
	int guesses = 20;
	// cout << number;
	cout << "Guess the number! (0-100)" << endl;
	cout << "You have " << guesses << " guess(es) left." << endl;
	cin >> guess;
	guesses--;

	while (guess != number && guesses > 0) {
		if (guess > number) {
			cout << "Too high!" << endl;
		}
		if (guess < number) {
			cout << "Too low!" << endl;
		}
		
		cout << "Guess the number! (0-100)" << endl;
		cout << "You have " << guesses << " guess(es) left." << endl;
		cin >> guess;

		guesses--;
	}

	if (guesses > 0) {
		cout << "You guessed the number!" << endl;
	}
	else {
		cout << "You didn't guess the number..." << endl;
	}

	//clear buffer, wait for input to close program
	cin.clear(); cin.ignore(INT_MAX, '\n');
	cout << "Press any key to end..." << endl;
	cin.get();

	return 0;
}
