#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
   
   srand(time(0));

    int rnum = rand() % 100 + 1 , userGuess , chance = 0;

    cout << "your Time is start now for this Guessing Game" << endl;

    do {
        
        cout << "Guess the No. between 1 and 100 ";  
        cin >> userGuess;

       
        if (userGuess ==rnum ) {
            cout << "hurrah! you found your matching Number after " << chance + 1 << " chances." << endl;
        } else if (userGuess < rnum) {
            cout << "Too low  \n Guess higher \n Try again." << endl;
        } else {
            cout << "Too high \n Guess lower\n Try again." << endl;
        }
        chance++;

    } while (userGuess != rnum);

    return 0;
}