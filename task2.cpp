// #2 SIMPLE CALCULATOR


#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Choose an operation (add,subtract,multiply, division): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "The result is: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "The result is: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "The result is: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
            } else {
                cout << "The result is: " << num1 / num2 << endl;
            }
            break;
        default:
            cout << "Please enter a valid operation (+, -, *, /) to avoid error" << endl;
            break;
    }

    return 0;
}