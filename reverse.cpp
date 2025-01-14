#include <iostream>
#include <cmath>

int reverseInteger(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        n /= 10;
        reversed = reversed * 10 + digit;
    }  
    return reversed;
}
int main() {
    int n = 123;
    std::cout << "Reversed: " << reverseInteger(n) << std::endl; 
    n = -456;
    std::cout << "Reversed: " << reverseInteger(n) << std::endl;
    return 0;
}