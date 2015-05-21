//*
//* Question4.cpp
//*
//* Name: Anieze Ugochukwu Samuel
//* Department: Computer science
//*Matric. no: PDS/2013/0350
//*
//* Program that inputs a five-digit integer,
//* seperates the integer into its digits and prints them separated by three spaces each
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int fivedigit;
    int first,second,third,fourth,fifth;
    
    cout << "enter five digit integer: ";
    cin >> fivedigit;
    
    if(fivedigit < 10000)
    {
      cout << "incorrect digit! try again!";
      
      if(fivedigit > 99999)
      {
        cout << "incorrect digit! try again!";
      }
                                                      
      first =fivedigit/10000;
      second =(fivedigit/1000)%10;
      third =(fivedigit/100)%10;
      fourth =(fivedigit/10)%10;
      fifth =fivedigit%10;
                              
      cout << first;
      cout << " " << second;
      cout << " " << third;
      cout << " " << fourth;
      cout << " " << fifth;
                              
      return 0;
      }
      }



      
                              
                                                           
                                               
                              
                              
                 
