#include<iostream>
using namespace std;

class FactorialCalculator {
public:
    int calculateFactorial(int num) {
        if (num == 0 || num == 1) {
            return 1;
        } else {
            return num * calculateFactorial(num - 1);
        }
    }
};

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    FactorialCalculator factorialObj;
    int result = factorialObj.calculateFactorial(number);

    cout << "Factorial of " << number << " is: " << result << endl;

    return 0;
}
