
#include <iostream>
using namespace std;
int power(int x, int n) {
    if (n == 0) {
        return 1;
    }
    return x * power(x, n - 1);
}

int main() {
    int x, n;
    cout << "Enter the x: ";
cin >> x;
    cout << "Enter the n: ";
    cin >>n;

    int result = power(x, n);
    cout << "Result: " << result <<endl;

    return 0;
}
