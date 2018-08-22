//library
#include <iostream>
using namespace std;
//main function
int main ()
{
float B , H , A ;
// enter base length in meter
cout << "enter base length in meter" << endl;
//store value in B
cin >> B ;
cout << "enter height in meter" << endl;
//store value in H
cin >> H ;
// finding value of area
A = B*H/2;
// print in terminal
cout << "Area of triangle = " << A << endl;
return 0;
}
