// #1 NUMBER GUESSING GAME



#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
   
    srand(time(0));

    
    int randomNumber = rand() % 100 + 1;

    int guess;
    cout << "Guess the number between 1 and 100: ";
    cin >> guess;

     while (guess != randomNumber) {
        if (guess < randomNumber) {
            cout << "Too low! plz Try again: ";
        } 
        else {
            cout << "Too high! plz Try again: ";
        }
        cin >> guess;
    }
    cout << "Congratulations! You guessed it(the random number).\n";

    return 0;
}