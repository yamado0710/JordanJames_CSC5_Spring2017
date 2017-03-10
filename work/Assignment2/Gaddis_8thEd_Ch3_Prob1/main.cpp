/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on MArch 3, 2017, 11:25 AM
 * Purpose: To create a program that can calculate an individuals fuel milage
 * based on how much gas was consumed over a given mileage.
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float miles;  //miles driven
    float gallon; //gallons consumed
    float mpg;   //miles divided by gallons
    //Input or initialize values Here
    
    //Process/Calculations Here
    cout<<"Enter the amount of miles driven"<<endl;
    cin>>miles;
    cout<<"How many gallons of gasoline were consumed?"<<endl;
    cin>>gallon;
    mpg=miles/gallon;
    //Output Located Here
    cout<<"based on the data driven your car gets "<< mpg;
    cout<<" miles per gallon"<<endl;
    

    //Exit
    return 0;
}

