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
    float item1=15.95; // cost of item 1
    float item2=24.95; //cost of item 2
    float item3=6.95; //cost of item 3
    float item4=12.95; //cost of item 4
    float item5=3.95; //cost of item 5
    float saletax=0.07; //sales tax percentage
    float amnttax; //calculated tax amount
    float subttl,total;
    //Input Data
    subttl=item1+item2+item3+item4+item5;
    amnttax=subttl*saletax;
    total=subttl+amnttax;
    //Map inputs to outputs or process the data
    cout<<"The cost of item 1 is $"<<item1<<endl;
    cout<<"The cost of item 2 is $"<<item2<<endl;
    cout<<"The cost of item 3 is $"<<item3<<endl;
    cout<<"The cost of item 4is $"<<item4<<endl;
    cout<<"The cost of item 5 is $"<<item5<<endl;
    cout<<"The subtotal cost of all five items is $"<<subttl<<endl;
    cout<<"The cost of taxes based on the subtotal is $"<<amnttax<<endl;
    cout<<"The total cost after tax is $"<<total<<endl;
    //outputs the transformed data
     
    //Exit stage right!
return 0;
}