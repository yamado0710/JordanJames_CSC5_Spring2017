/*
 * File:    main.cpp
 Author: James Jordan
 Created on February 16, 2017, 11:17 AM
 *Purpose: To calculate paychecks after working x amount of hours.
* 
 */
 
  //System Libraries
#include <iostream>    //Input - Output Library

using namespace std; //Name-Space under which systems libraries exist

  //User Libraries

  //Global Libraries

  //Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare variables
    float payChk, //Paycheck in $'s
            hrsWrkd, //number of hours worked
            payRate; //pay per hour of work

    //Initialize variables
    hrsWrkd=40; //40 hours worked
    payRate=10; //10 dollars per hour

    //Input Data
    
    //Map inputs to outputs or process the data
 payChk=hrsWrkd*payRate; //Pay equals hours worked times pay rate
    //outputs the transformed data
 cout<<"Hours worked = "<<hrsWrkd<<"(hrs)"<<endl;
 cout<<"Pay rate = $ "<<payRate<<"/hr"<<endl;
 cout<<"Gross Pay = $"<<payChk<<endl;
    //Exit stage right!
return 0;
}