#include <iostream>
using namespace std;

bool isIncreasing(int n) {
   
    if (n < 10)
        return true;

    int last = n % 10;          
    int second_last = (n / 10) % 10; 

    
    if (last <= second_last)
        return false;
    
    return isIncreasing(n / 10);
}

int main() {
    cout << boolalpha;
    cout << isIncreasing(1234) << endl; 
    cout << isIncreasing(1224) << endl; 
    cout << isIncreasing(132) << endl;  
    cout << isIncreasing(8) << endl;    
    return 0;
}

   
