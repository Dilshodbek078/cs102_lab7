#include <iostream>
using namespace std;
int productOfDigits(int n) {
    if (n == 0) {
        return 1;
    }

    return (n % 10) * productOfDigits(n / 10);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num == 0) {
        cout << "Product of digits: 0" << endl;
    } else {
        cout << "Product of digits: " << productOfDigits(num) << endl;
    }

    return 0;
}
