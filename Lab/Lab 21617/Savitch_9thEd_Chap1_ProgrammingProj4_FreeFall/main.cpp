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

  //Global Constants
const float GRAVITY=32.174f;//Gravity on Earth Sea-Level ft
  //Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare variables
    float time, distnce;

    //Initialize variables
    time=1.0f;
    
    //Input Data

    //Map inputs to outputs or process the data
    distnce=GRAVITY*time*time/2; //Results in ft
    //outputs the transformed data
    cout<<"Free fall of "<<time<<" secs = "<<distnce<<" ft"<<endl;
    //Exit stage right!
return 0;
}