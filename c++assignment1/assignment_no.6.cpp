//*
//* Question6.cpp
//*
//* Name: Anieze Ugochukwu Samuel
//* Department: Computer science
//* Matric. no: PDS/2013/0350
//*
//* BMI calculator application that reads
//* the users weight in kilograms and height in meters,
//* calculates and display the users body mass index
#include<iostream>

using namespace std;

int main()
{
    double feet;
    double inches;
    double height;
    double weight;
    double bmi;
    
    cout<<"== BMI Calculator =="<<endl;
    cout<<"step 1:Enter height"<<endl;
    
    cout<<"feet:"<<endl;
    cin>>feet;
    
    cout<<"inches:"<<endl;
    cin>>inches;
    
    cout<<"step 2:Enter weight"<<endl;
    cout<<"pounds:"<<endl;
    cin>>weight;
    
    height =(feet * 12) + inches;
    bmi= (weight*703) / (height * height);
    
    cout<<"BMI:"<<bmi<<endl;
}
