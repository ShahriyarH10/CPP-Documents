#include <iostream>
using namespace std;

int main() {
    int n, Uty;
    double FlatRent, RoomRent;
    cout << "Enter the Number of Person in Mess = ";
    cin >> n;
    cout << endl;

    string MessMem[n] = {"Arefin", "Soykot", "Zahid", "Sujon", "Fazle", "Zia", "Abid", "Sohan"};


    double IndiMeal[n], TotalMeal = 0;
    double IndiBazar[n], TotalBazar = 0;
    double Person[n], KhalaBill[n], ToKhalaBi;
    double MealRate, GaT, TotalAmount;


    /*for(int i = 0; i < n; i++) {
        cout << "Enter the name of Mess Member " << i+1 << " : ";
        cin >> MessMem[i];
    }
    cout << endl;*/


    // \u09F3 is Taka sign; Bangladeshi currency

    cout << "Enter Flat Rent: \u09F3";
    cin >> FlatRent;

    RoomRent = FlatRent / n;

    cout << "Room Rent per Person: " << "\u09F3" << RoomRent << endl;
    cout << endl;


    cout << "Enter Utility Bill per Person: ";
    cin >> Uty;
    cout << endl;


    // for indivual Input it used for loop
    for(int i = 0; i < n; i++) {
        cout << "Enter Khala Bill for " << MessMem[i] << ": \u09F3";
        cin >> KhalaBill[i];
        ToKhalaBi += KhalaBill[i];
    }
    cout << endl;


    // Calculate the Total Bazars
    for(int i = 0; i < n; i++) {
        cout << "Enter Total Bazar of " << MessMem[i] << ": \u09F3";
        cin >> IndiBazar[i];
        TotalBazar += IndiBazar[i];
    }
    cout << endl;
    cout << "Total Bazar of Mess = " << "\u09F3" << TotalBazar << endl;
    cout << endl;


    // Calculate the Total Meals
    for(int i = 0; i < n; i++) {
        cout << "Enter Total Meal of " << MessMem[i] << ": ";
        cin >> IndiMeal[i];
        TotalMeal += IndiMeal[i];
    }
    cout << endl;
    cout << "Total Meal of Mess = " << TotalMeal << endl;
    cout << endl;


    MealRate = TotalBazar / TotalMeal;

    cout << "Mess Meal Rate = " << MealRate << endl;
    cout << endl;


    // if else is used inside for loop for Give and Take condition
    for(int i = 0; i < n; i++) {

        GaT = IndiBazar[i] - (IndiMeal[i] * MealRate);

        if(GaT > 0){

            Person[i] = (RoomRent + Uty + KhalaBill[i]) - GaT;
            cout << "Money will get after Deducting from " << MessMem[i] << "'s Bazar: \u09F3" << GaT << endl;

            cout << "Total Constant (Room Rent + Utitliy + Khala Bill) Value: \u09F3" << (RoomRent + Uty + KhalaBill[i]) << endl;
            cout << "Total Amount have to pay for " << MessMem[i] << ":" << " \u09F3" << Person[i] << endl << endl;

        } else {

            Person[i] = (RoomRent + Uty + KhalaBill[i]) - GaT;
            cout << "Money will give after Deducting from " << MessMem[i] << "'s Bazar: \u09F3" << GaT << endl;

            cout << "Total Constant (Room Rent + Utitliy + Khala Bill) Value: \u09F3" << (RoomRent + Uty + KhalaBill[i]) << endl;
            cout << "Total Amount have to pay for " << MessMem[i] << ":" << " \u09F3" << Person[i] << endl << endl;

        }

        TotalAmount += Person[i];

    }

    cout << "Total Amount earn From Utility Bill: \u09F3" << Uty * n << endl;
    cout << "Total Amount earn From Khala Bill: \u09F3" << ToKhalaBi << endl;
    cout << "Total Amount earn From Mess Member: \u09F3" << TotalAmount << endl;





    /*double Person1 = IndiBazar[0] - (IndiMeal[0] * MealRate);
    cout << "Amount have to give for Person1 = " << Person1 << endl;

    double Person2 = IndiBazar[1] - (IndiMeal[1] * MealRate);
    cout << "Amount have to give for Person2 = " << Person2 << endl;

    double Person3 = IndiBazar[2] - (IndiMeal[2] * MealRate);
    cout << "Amount have to give for Person3 = " << Person3 << endl;

    double Person4 = IndiBazar[3] - (IndiMeal[3] * MealRate);
    cout << "Amount have to give for Person4 = " << Person4 << endl;

    double Person5 = IndiBazar[4] - (IndiMeal[4] * MealRate);
    cout << "Amount have to give for Person5 = " << Person5 << endl;

    double Person6 = IndiBazar[5] - (IndiMeal[5] * MealRate);
    cout << "Amount have to give for Person6 = " << Person6 << endl;*/


}
