 //*
// * Question1.cpp
 //*
// * NAME: ANIEZE UGOCHUKWU SAMUEL
// *DEPARTMENT: COMPUTER SCIENCE
// *MATRIC. NO: PDS/2013/0350
// *
// * PROGRAM THAT READS AN INTEGER AND DETERMINES
// * AND PRINTS WTHETHER ITS ODD OR EVEN
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int Z;
    
    cout << "enter integer :\n";
    cin >> Z;

if (Z % 2 == 0)
cout << "the integer is even.\n";
if(Z % 2 == 1)
cout << "the integer is odd.\n";

return 0;
}
