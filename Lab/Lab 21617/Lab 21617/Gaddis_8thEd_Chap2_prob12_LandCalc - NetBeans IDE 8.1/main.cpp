/*
 * File:    main.cpp
 Author: James Jordan
 Created on February 16, 2017, 11:17 AM
 *Purpose: To convert acres to miles or feet
* 
 */
 
  //System Libraries
#include <iostream>    //Input - Output Library
using namespace std; //Name-Space under which systems libraries exist

  //User Libraries

  //Global Libraries
const float CNVACFT=43560; //1 Acre = 43560 ftsq
const float CNVFTMI=1/5280; //1 Mile = 5280 ft

  //Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float acres,ftsq,milesq;

    //Initialize variables
    acres=1.0f;//Number of acres
    //Input Data

    //Map inputs to outputs or process the data
    ftsq=acres*CNVACFT;
    milesq=ftsq*CNVFTMI*CNVFTMI;

    //outputs the transformed data
        cout<<acres<<" Acres = "<<ftsq
                <<" ft^2 = "<<milesq<<" miles^2"<<endl;
    //Exit stage right!
return 0;
}