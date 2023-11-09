#include <iostream>
using namespace std;
                                //x-terminal-emulator
int main() {

   int x, y;
   cout << "Enter test number: ";
   cin >> x;
   cout << "Enter another test number: ";
   cin >> y;

   if (x % 2 == 0 && y % 2 == 0) {
      cout << "They are even" << endl;
      int eventotal = x * y;
      if (eventotal <= 100) {
         cout << "The product of numbers: " << eventotal << endl ;
      } else {
         cout << "Product above 100" << endl;
      }
   }

   if(x % 2 != 0 && y % 2 !=0) {
      cout << "They are odd" << endl;
      int oddtotal = x + y;
      if (oddtotal <= 100 && oddtotal % 2 == 0 ) {
         cout << "The sum of numbers: " << oddtotal << endl;
      } else {
         cout << "Sum is above 100 and even" << endl;
      }
   }
      return 0;
}
