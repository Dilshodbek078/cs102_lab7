#include <iostream>
using namespace std;

int evenDigits(int n) {
    if (n == 0) {
        return 0;
    }

    int lastDigit = n % 10;
    int count = (lastDigit % 2 == 0) ? 1 : 0;
    return count + evenDigits(n / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = evenDigits(n);
    cout << "The number of even digits is: " << result << endl;
    return 0;
}
