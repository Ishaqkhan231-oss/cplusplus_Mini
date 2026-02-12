#include <iostream>
using namespace std;

int main() {
    // Example: Calculate the sum of numbers from 1 to 10 using a for loop

    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        sum += i;
        cout << "Step " << i << ": sum = " << sum << endl;
    }

    cout << "\nThe sum of numbers from 1 to 10 is: " << sum << endl;

    return 0;
}
