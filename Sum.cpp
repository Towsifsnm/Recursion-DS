#include <iostream>
using namespace std;

int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0; // Base case: sum of 0 natural numbers is 0
    } else {
        return n + sumOfNaturalNumbers(n - 1); // Recursively calculate the sum
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = sumOfNaturalNumbers(n);
    cout << "Sum of first " << n << " natural numbers: " << sum << endl;

    return 0;
}
