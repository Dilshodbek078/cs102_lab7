#include <iostream>
using namespace std;
bool isPowerOfTwo(int n) {

    if (n == 1) {
        return true;
    }
    if (n <= 0) {
        return false;
    }
    if (n % 2 == 0) {
        return isPowerOfTwo(n / 2);
    } else {
        return false;
    }
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPowerOfTwo(num)) {
        cout << num << " is a power of two." << endl;
    } else {
        cout << num << " is not a power of two." << endl;
    }

    return 0;
}
