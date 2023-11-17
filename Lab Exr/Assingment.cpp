#include <iostream>
using namespace std;

int main() {
    char choice;
    int op;
    double num1, num2, result;
    bool continueLoop = true;

    cout << "Welcome to the calculator!" << endl;
    cout << "Enter Y to start the calculator or N to exit: ";
    cin >> choice;
    cout << endl;

    while (continueLoop) {

        if (choice == 'Y' || choice == 'y') {

            cout << "Select the operation you want to perform:" << endl;
            cout << "1. Addition" << endl;
            cout << "2. Subtraction" << endl;
            cout << "3. Multiplication" << endl;
            cout << "4. Division" << endl;
            cout << "   Enter your Option: ";
            cin >> choice;

            cout << endl;

            switch (choice) {
                
                case '1':

                    cout << "Enter the first number: ";
                    cin >> num1;
                    cout << "Enter the second number: ";
                    cin >> num2;
                    cout << endl;

                    if (num1 + num2 > 100) {
                        cout << "Error: The sum of the two numbers cannot exceed 100." << endl << endl;
                    } else {
                        result = num1 + num2;
                        cout << "The sum of " << num1 << " and " << num2 << " is " << result << endl << endl;
                    }
                    break;

                case '2':

                    cout << "Enter the first number: ";
                    cin >> num1;
                    cout << "Enter the second number: ";
                    cin >> num2;
                    cout << endl;

                    if (num1 < 10) {
                        cout << "Error: The first number cannot be less than 10 for subtraction." << endl << endl;
                    } else {
                        result = num1 - num2;
                        cout << "The difference of " << num1 << " and " << num2 << " is " << result << endl << endl;
                    }
                    break;

                case '3':

                    cout << "Enter the first number: ";
                    cin >> num1;
                    cout << "Enter the second number: ";
                    cin >> num2;
                    cout << endl;

                    if (num1 < num2) {
                        cout << "Error: The second number cannot be larger than the first number for multiplication." << endl << endl;
                    } else {
                        result = num1 * num2;
                        cout << "The product of " << num1 << " and " << num2 << " is " << result << endl << endl;
                    }
                    break;

                case '4':
                
                    cout << "Enter the first number: ";
                    cin >> num1;
                    cout << "Enter the second number: ";
                    cin >> num2;
                    cout << endl;

                    if (num2 == 0) {
                        cout << "Error: Division by zero is not allowed." << endl << endl;
                    } else {
                        result = num1 / num2;
                        cout << "The quotient of " << num1 << " and " << num2 << " is " << result << endl << endl;
                    }
                    break;

                default:
                    cout << "Invalid choice." << endl << endl;
            }

            cout << "To use calulator again press Y or N to exit: ";
            cin >> choice;
            cout << endl;

        } else if (choice == 'N' || choice == 'n') {
            cout << "Thank you for using the calculator!" << endl << endl;
            continueLoop = false;
        } else {
            cout << "Invalid choice." << endl << endl;
        }
    }
    return 0;
}
