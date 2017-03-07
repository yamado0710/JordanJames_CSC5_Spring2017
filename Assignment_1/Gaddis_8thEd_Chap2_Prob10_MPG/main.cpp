/*
 * File:    main.cpp
 Author: James Jordan
 Created on February 16, 2017, 11:17 AM
 *Purpose: Calculate the mpg in a car that can drive 375 miles before refueling
 * contains 15 gallons of fuel
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
    float gallons=15; //Gallons of gasoline
    float miles=375; // the number of miles the can can drive with a full tank
    float mpg;
    //Input Data
    mpg=miles/gallons;
    //Map inputs to outputs or process the data

    //outputs the transformed data
    cout<<"This car gets "<<mpg<<" miles per gallon";
    //Exit stage right!
return 0;
}