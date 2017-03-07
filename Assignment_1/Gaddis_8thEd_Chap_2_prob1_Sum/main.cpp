/*
 * File:    main.cpp
 Author: James Jordan
 Created on February 16, 2017, 11:17 AM
 *Purpose: Write a program that stores the integers 50 and 100 in variables,
 * and stores the sum of these two in a named variable named total
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
    
    //Declare variables and initialize
    float total; //amount of food
    float atGrens;//amount of fruit and vegetables
    float atMeat;  //amount of meat       
    atGrens=50; 
    atMeat=100; 
    
    //Input Data
    total=atGrens+atMeat;
    //Map inputs to outputs or process the data

    //outputs the transformed data
     cout<<"The total amount of food is = "<<total<<endl;
    //Exit stage right!
return 0;
}