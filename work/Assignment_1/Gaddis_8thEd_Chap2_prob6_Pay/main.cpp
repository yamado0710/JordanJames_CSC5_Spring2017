/*
 * File:    main.cpp
 Author: James Jordan
 Created on February 16, 2017, 11:17 AM
 *Purpose: Template to be utilized in in creating
 *         solutions to problems in our CSC/CIS 5 
 *         class.
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
    
    //Declare variables and  initialize variables
    double payAmnt=2200; //Pay amount
    double payPrd=26;  //Payment period
    double anulPay;     //Annual pay     
            
            
    //Input Data
    anulPay=payAmnt*payPrd;
    
    //Map inputs to outputs or process the data

    //outputs the transformed data
cout<<"The employees annual total pay is $"<<anulPay<<endl; 
    //Exit stage right!
return 0;
}