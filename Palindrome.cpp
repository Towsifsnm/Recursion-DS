

#include <iostream>
using namespace std;

bool isPalindrome(int num, int originalNum, int reversedNum) {
    if (num == 0) {
        return originalNum == reversedNum;
    }
    int lastDigit = num % 10;
    reversedNum = (reversedNum) * 10 + lastDigit;
    return isPalindrome(num / 10, originalNum, reversedNum);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num, num, 0)) {
    cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}
