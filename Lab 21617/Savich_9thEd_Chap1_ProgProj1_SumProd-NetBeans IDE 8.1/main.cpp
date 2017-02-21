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
#include <cstdlib>     //Random number generator
#include <ctime>       //Time Library to seed the random number generator
using namespace std; //Name-Space under which systems libraries exist

  //User Libraries

  //Global Libraries

  //Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //initialize the random number generator with time
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
short op1,op2,sum,prod;

    //Initialize variables
op1=rand()%171+10;//[10-180]
op2=rand()%171+10;//[10-180]

    //Input Data

    //Map inputs to outputs or process the data
        sum=op1+op2;
       prod=op1*op2;

    //outputs the transformed data
        cout<<op1<<" + "<<op2<<" - "<<sum<<endl;
        cout<<op1<<" + "<<op2<<" - "<<prod<<endl;
    //Exit stage right!
return 0;
}