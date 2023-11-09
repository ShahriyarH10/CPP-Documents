// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    char op;
    double SubNum[2], DivNum[2], SubTotal, DivTotal;
    
    
    do{
      
        switch(op) {
        
            case 'y':
            cout << "Enter Operation such as [Addition(+), Subtraction(-), Multiplication(*), Division(/), Clear Screen, Exit]: ";
            cin >> op;
            if(op == '+' || op == 'A') {

                cout << "Enter How many number you want to addition: ";
                cin >> n;

                double AddNum[n], AddTotal;

                for(int i = 0; i < n; i++) {
                    cout << "Enter the " << i + 1 << "th numbers for sum: ";
                    cin >> AddNum[i];
                    AddTotal += AddNum[i];
                }
                cout << "The sum of numbers: " << AddTotal << endl;

            } else if(op == '-' || op == 'S') {

                cout << "Enter the 1st Number: ";
                cin >> SubNum[0];

                cout << "Enter the 2nd Number: ";
                cin >> SubNum[1];

                SubTotal = SubNum[0] - SubNum[1];
                cout << "The subtraction of " << SubNum[0] << " and " << SubNum[1] << " numbers: " << SubTotal << endl;

            } else if(op == '*' || op == 'M') {

                cout << "Enter How many number you want to Multiplication: ";
                cin >> n;

                double MulNum[n] = {}, MulTotal = 1;

                for(int i = 0; i < n; i++) {
                    cout << "Enter the " << i + 1 << "th numbers for product: ";
                    cin >> MulNum[i];
                    MulTotal *= MulNum[i];
                }
                cout << "The product of numbers: " << MulTotal << endl;

            } else if(op == '/' || op == 'D') {

                cout << "Enter the 1st Number: ";
                cin >> DivNum[0];

                cout << "Enter the 2nd Number: ";
                cin >> DivNum[1];

                if(DivNum[1] != 0){

                    DivTotal = DivNum[0] / DivNum[1];
                    cout << "The Division of " << DivNum[0] << " and " << DivNum[1] << " numbers: " << DivTotal << endl;
            
                } else {

                    cout << "The divider can not equal to ZERO" << endl;
            
                }
        
            } else {

                cout << "Error! operator is not correct." << endl;

            }
            break;
        
            case 'n':
            cout << "\033[2J\033[1;1H";
            cout << "Calculation Finished" << endl;
            break;

        }
        
      /*if(op = 'y'){
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        cout << a + b << endl;
        }else if(op == 'n') {
          cout << "Calculation Finished";
          break;
      }*/

        cout << "Do you want to calculet y/n? ";
        cin >> op;
    
    } while(op == 'y' || op == 'n');
  
    return 0;
}