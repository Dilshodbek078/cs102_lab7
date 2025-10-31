#include <iostream>
using namespace std;

int reverseNumber(int num, int reversed = 0) {
    if (num == 0)
        return reversed;
    return reverseNumber(num / 10, reversed * 10 + (num % 10));
}

bool isPalindrome(int num) {
    return num == reverseNumber(num);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << " true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
