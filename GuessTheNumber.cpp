#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int randomNumber(int &randnumber);

int main() {
  int number;
  int guess;
  int guesses = 20;
  char temp;
  
  randomNumber(number);

  cout << "Guess the number (0-100): ";
  cout << "You have " << guesses << " guesses left.";
  cin >> guess;
  guesses--;

  while(guess != number && guesses > 0) {
    
    if(guess > number) {
      cout << "Too high!" << endl;
    }
    
    else if (guess < number) {
      cout << "Too low!" << endl;
    }
    
    cout << "Guess the number (0-100): ";
    cout << "You have " << guesses << " guesses left.";
    cin >> guess;
    guesses --;
  }
    
  if (guesses > 0) {
    cout << "Good job! You guessed it!" << endl;
  }
  else {
    cout << "You did not guess the number..." << endl;
  }
  
  cout << "Press any key and enter to quit..." << endl;
  cin >> temp;
  
  return 0;
}

int randomNumber(int &randnumber) {
  int max;
  max = 101;
  srand(time(0));
  randnumber = rand() % max;
}
