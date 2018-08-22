//library
#include <iostream>
// library for mathmatical function
#include <cmath>
using namespace std;
//main function
int main ()
{
float M , P , C , CS , E , T ,A , Pr ;
// enter marks with maximum marks = 100 in a subject
cout << "enter marks of math" << endl;
//store value in M
cin >> M ;
cout << "enter marks of physics" << endl;
//store value in P
cin >> P ;
cout << "enter marks of chemistry" << endl;
//store value in C
cin >> C ;
cout << "enter marks of computer science" << endl;
//store value in CS
cin >> CS ;
cout << "enter marks of English" << endl;
//store value in E
cin >> E ;

// finding value of total marks
T= M+P+C+CS+E;
// print in terminal
cout << "total marks = " << T << endl;
A=T/5;
// print in terminal
cout << "AVERAGE MARKS = " << A << endl;
Pr=(T/500)*100;
// print in terminal
cout << "PERCENTAGE MARKS = " << Pr << endl;


return 0;
}
