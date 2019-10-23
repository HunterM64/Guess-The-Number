#include <iostream>
#include <cstdlib>
using namespace std;

int randomNumber(int &randnumber);

int main() {
  int number;
  int guess;

  randomNumber(number);

  cout << "Guess the number (0-100): ";
  cin >> guess;

  while(guess != number) {
    if(guess > number) {
      cout << "Too high!" << endl;
    }
    else if (guess < number) {
      cout << "Too low!" << endl;
    }
    cout << "Guess the number (0-100): ";
    cin >> guess;
  }
    
  cout << "Good job! You guessed it!" << endl;

  return 0;
}

int randomNumber(int &randnumber) {
  int max;
  max = 100; //upper bound of our random number
  srand(time(0));
  randnumber = rand() % max;
}
