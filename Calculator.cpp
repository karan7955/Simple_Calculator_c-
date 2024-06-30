#include <iostream>

using namespace std;

class Calculator {
private:
    double num1;
    double num2;

public:
    Calculator(double n1, double n2) {
        num1 = n1;
        num2 = n2;
    }

    double add() {
        return num1 + num2;
    }

    double subtract() {
        return num1 - num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0; // Or handle the error in a better way
        }
    }
};

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    Calculator calc(num1, num2);

    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;

    switch(operation) {
        case '+':
            cout << "Result: " << calc.add() << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract() << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply() << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide() << endl;
            break;
        default:
            cout << "Invalid operation. Please choose from +, -, *, /." << endl;
    }

    return 0;
}
