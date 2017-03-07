/*
 * File:    main.cpp
 Author: James Jordan
 Created on February 16, 2017, 11:17 AM
 *Purpose: sales tax: Write a program that will compute the total sales tax on
 * a $95 purchase. Assume the state sales tax is 4 percent and the county sales
 * tax is 2 percent.
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
    float purchprc=95; //purchasing price
    float stsltax=0.04; //State sales tax
    float cnsltax=0.02; //county sales tax
    float ttlprce;
    //Input Data
    ttlprce=purchprc+purchprc*(stsltax+cnsltax);
    //Map inputs to outputs or process the data
    
    //outputs the transformed data
    cout<<"the total price of the goods after tax is $"<<ttlprce<<endl;  
    //Exit stage right!
return 0;
}