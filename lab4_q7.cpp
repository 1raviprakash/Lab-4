//library
#include <iostream>
// library for mathmatical function
#include <cmath>
using namespace std;
//main function
int main ()
{
float  A , S ;
// enter side length in meter
cout << "enter side length in meter" << endl;
//store value in S
cin >> S ;
// finding value of area
A = (sqrt(3)/4)*S*S;
// print in terminal
cout << "Area of triangle = " << A << endl;
return 0;
}

