#include <iostream>
using namespace std;

int main() {
   char op;
   int num1, num2;

   cout << "Enter your operator such as +,-, *, /: ";
   cin >> op;

   cout << "Enter your 1st number: ";
   cin >> num1;

   cout << "Enter your 2nd number: ";
   cin >> num2;

   /*if(op == '+') {
      cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
   }

   else if(op == '-') {
      cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
   }

   else if(op == '*') {
      cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
   }

   else if(op == '/') {
      cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
   }

   else {
      cout << "Error! operator is not correct" << endl;
   }*/



   switch(op) {
      case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
      break;

      case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
      break;

      case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
      break;

      case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
      break;

      case '%':
      cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;

      default:
      cout << "Error! operator is not correct" << endl;
      break;

   }
}


/*int day = 4;

switch(day) {
case 4:
}

//is the equivalent of

if(day == 4){
}*/
