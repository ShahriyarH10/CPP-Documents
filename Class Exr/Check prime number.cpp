#include<iostream>
using namespace std;

int main()
{
   int num, i;
   bool checkPrime = true;

   cout << "Enter the positive integer number: ";
   cin >> num;


   for (i = 2; i <= num / 2; ++i)
   {
      if ((num % i) == 0)
      {
         checkPrime = false;
      }
   }

   if (checkPrime)
      cout << num << " is a prime number." << endl;
   else
      cout << num << " is not a prime number." << endl;

   return 0;
}
