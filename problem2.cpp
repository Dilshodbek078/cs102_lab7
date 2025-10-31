#include <iostream>
using namespace std;

int reverseNumber(int num, int reversed = 0) {
    if (num==0)
        return reversed;


    return reverseNumber(num / 10, reversed * 10 + (num % 10));
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int R= reverseNumber(num);
    cout << "Reversed number: " <<R << endl;

    return 0;
}
