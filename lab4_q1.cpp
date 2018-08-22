//library
#include <iostream>
using namespace std;
//main function
int main ()
{
float lc, lm, lk;
// enter length in centimeter
cout << "enter length in centimetre" << endl;
//store value in  lc
cin >> lc ;
// convert centimeter into meter and kilometer
lm = (lc/100);
lk = (lc/100000);
// print in terminal
cout << "length in metre = " << lm << endl;
cout << "length in kilometre = " << lk << endl;
return 0;
}


