//library
#include <iostream>
using namespace std;
//main function
int main ()
{
float A, B, C;
// enter angle A in degree
cout << "enter angle A in degree" << endl;
//store value in A
cin >> A ;
cout << "enter angle B in degree" << endl;
//store value in B
cin >> B ;
// finding value of angle C
C = 180-A-B;
// print in terminal
cout << "angle C in degree = " << C << endl;

return 0;
}
