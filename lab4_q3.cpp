//library
#include <iostream>
using namespace std;
//main function
int main ()
{
// fixing variables
float C, F;
// enter temp in fahrenheit
cout << "enter length in fahrenheit" << endl;
//store value in  F
cin >> F ;
// enter temp in celcius
C = (F-32)*5/9 ;
// print in terminal
cout << "temp in celcius = " << C << endl;
return 0;
}
