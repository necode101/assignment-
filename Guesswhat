#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Tro choi tim so bat dau!" << endl;
    cout << "doan xem so do la bao nhieu (1-100)" << endl;

    do {
        cout << "ban doan la so may : ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "your number is too small" << endl;
        } else if (guess > secretNumber) {
            cout << "your number is too high" << endl;
        } else {
            cout << "Correct answer, the number is " << secretNumber <<endl;
            cout<<"yourpoint is "<<101-attempts<<"the max point is 100 "<<endl;
        }

            } while (guess != secretNumber);

    return 0;
}
