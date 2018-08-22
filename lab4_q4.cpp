//library
#include <iostream>
using namespace std;
//main function
int main ()
{
float D, W, M, Y;
// ENTER THE NUMBER OF DAY
cout << "ENTER THE NUMBER OF DAY" << endl;
//store value in  D
cin >> D ;
//CONVERT DAY INTO WEEKS, MONTH AND YEARS. 
W = (D/7);
M = (D/30);
Y = (D/365);
// print in terminal
cout << "NUMBER OF WEEKS = " << W << endl;
cout << "NUMBER OF MONTH = " << M << endl;
cout << "NUMBER OF YEARS = " << Y << endl;
return 0;
}
