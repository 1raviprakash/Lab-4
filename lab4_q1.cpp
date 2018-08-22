#include <iostream>
using namespace std;
int main ()
{
float lc, lm, lk;
cout << "enter length in centimetre" << endl;
cin >> lc ;
lm = (lc/100);
lk = (lc/100000);
cout << "length in metre = " << lm << endl;
cout << "length in kilometre = " << lk << endl;
return 0;
}


