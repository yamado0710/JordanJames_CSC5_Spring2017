/*
 * File:    main.cpp
 Author: James Jordan
 Created on February 16, 2017, 11:17 AM
 *Purpose: To calculate the number of acres on a property composed of 391,876 sq feet
 * note that one acres of land is equal to 43,560 sq feet
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
   
    //Input Data
    float acre;
    float sqfeet=391876;
    
    //Map inputs to outputs or process the data
    acre=sqfeet*1/43560;
    //outputs the transformed data
    cout<<"391876 feet converts to "<<acre<<" acres";
    //Exit stage right!
return 0;
}