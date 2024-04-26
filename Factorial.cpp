
#include <iostream>
using namespace std;

long factorial(int n) {
    if (n == 1)
        return 1;
    else
        return n * factorial(n-1);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

        cout << "Factorial of " << n << " is " << factorial(n);
    return 0;
}
