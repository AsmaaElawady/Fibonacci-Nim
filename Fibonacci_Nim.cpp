#include <iostream>
#include <iomanip>
using namespace std;
int main(void) {
    int n_coins = 0, found = 0, first_playercoins = 0, second_playercoins = 0;
//Get number of coins randomly
    srand(time(NULL));
    n_coins = rand() % 100;
    cout << "number = " << n_coins << endl;
    //print number of coins
    found = true;
    while (n_coins != 0) {
        while (found) {
            cout << "first player enter number of coins: ";   //number of coin first player
            cin >> first_playercoins;
            while (first_playercoins >= n_coins) {   // if what the first player takes is greater than the number of coins let him withdraw again
                cout << "first player enter another number of coins: ";
                cin >> first_playercoins;
            }
            n_coins -= first_playercoins;      // subtracts the number of coins from the one taken by the first player and print rest
            cout << "Remaining coins = " << n_coins << endl;
            found = false;
        }

        cout << "second player enter your coins:";          //number of coin second player
        cin >> second_playercoins;

        // the second player enters the number of coins not more than twice what the first player will enter and it is not equal to the number of coins
        while (second_playercoins >= n_coins or second_playercoins >= 2 * first_playercoins) {
            cout << "second player enter another number of coins: ";
            cin >> second_playercoins;
        }
        n_coins -= second_playercoins;
        cout << "Remaining coins = " << n_coins << endl;
        if (n_coins == 1) {                 //if number of coins is equal to one print that the one who won
            cout << "first player won" << endl;
            break;
        }
        cout << "first player enter your coins: ";                    //number of coin first player
        cin >> first_playercoins;
        while (first_playercoins >= n_coins or first_playercoins >= 2 * second_playercoins) {
            cout << "first player enter another number of coins: ";
            cin >> first_playercoins;
        }
        n_coins -= first_playercoins;
        cout << "Remaining coins = " << n_coins << endl;
        if (n_coins == 1) {      //if number of coins is equal to one print that the one who won
            cout << "second player won" << endl;
            break;
        }


    }
}

