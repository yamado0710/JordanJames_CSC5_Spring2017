/*
File:   main.cpp
  //Author: James Jordan
  //Created on 2/21, 2017, 11:07 AM
  //Purpose: Calculate the percentage of budget spent on the US military
  //Military
*/
//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
 const float PERCENT=100.0f; //Percentage
 const float BILLION=1.0e9f;
 const float TRILLION=1.0e12f;
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here and Initialize
 
 float fedBudg=0.354e13f; // Federal budget of 3.54 trillion $'s in 2016 Budget
  
 float milBudg=0.580e12f;  //Military budget spending: 580 Billion $'s 2016 
 //Budget
 float nasaBud=18.5e9;   //NASA budget spending: 18.5 Billion $'s 2016 budget
  float perMil, perNasa;    //percentage budget
    //Input or initialize values Here
 perMil=milBudg/fedBudg*PERCENT;
 perNasa=nasaBud/fedBudg*PERCENT;   
  
    //Process/Calculations Here
 
    //Output Located Here
 
 cout<<"Federal budget =$"<<fedBudg/TRILLION<<"Trillions"<<endl;       
 cout<<"Military budget =$ "<<milBudg/BILLION<<" billions"<<endl;
 cout<<"NASA budget = $"<<nasaBud/BILLION<<" billions"<<endl;
 cout<<"Military budget percentage = "<< perMil<<endl;
 cout<<"NASA budget percentage = "<< perNasa<<endl;
    //Exit
    return 0;
}

