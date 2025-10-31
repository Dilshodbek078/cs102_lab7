#include<iostream>
using namespace std;

bool isPrime(int n, int i = 2) {
    if (n < 2)
        return false;
    if (i > sqrt(n))
        return true;
    if (n % i == 0)
        return false;
    return isPrime(n, i + 1);
}

int main() {
    cout << isPrime(17) <<endl;
    cout << isPrime(20) <<endl;
    return 0;
}
