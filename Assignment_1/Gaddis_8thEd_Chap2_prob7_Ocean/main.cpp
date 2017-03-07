/*
 * File:    main.cpp
 Author: James Jordan
 Created on February 16, 2017, 11:17 AM
 *Purpose: to take the current rate at which sea levels rise, and calculate
 * what it will be in 5,7, and 10 years.
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
    float sealvl=1.5; // the rate at which the sea level rises
    float fiveyrl;  // the sea level has risen x amount after five years
    float tenyrl;   // the sea level in ten years
    float svnyrl;   // the sea level in seven years
    //Input Data
    fiveyrl=5*sealvl;
    svnyrl=7*sealvl;
    tenyrl=10*sealvl;
    //Map inputs to outputs or process the data

    //outputs the transformed data
    cout<<"the current sea level "<<sealvl<<" millimeters higher"<<endl;
    cout<<"the sea level in five years will be "<<fiveyrl<<" millimeters higher"<<endl;;
    cout<<"the sea level in seven years will be "<<svnyrl<<" millimeters higher"<<endl;
    cout<<"the sea level in ten years will be "<<tenyrl<<" millimeters higher"<<endl;
    //Exit stage right!
return 0;
}