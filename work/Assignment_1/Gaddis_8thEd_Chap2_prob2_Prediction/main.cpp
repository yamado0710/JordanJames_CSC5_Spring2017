/*
 * File:    main.cpp
 Author: James Jordan
 Created on February 16, 2017, 11:17 AM
 *Purpose: The East Coast sales division of a company generates 58 percent 
 * of total sales, based on that percentage write a program that will predict
 * how much the East Coast division will generate if that company had 8.6
 * million in sales that year
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
    double ecdPrft;
    double ecdPrct=0.580;
    
    
    //Input Data

    //Map inputs to outputs or process the data
    ecdPrft= 8600000*ecdPrct;
    //outputs the transformed data
    cout<<"This program calculates the predicted sales of the East"
            "coast Sales Division.";
    cout<<"The East Coast sales division makes $ "<<ecdPrft<<endl;
    //Exit stage right!
return 0;
}