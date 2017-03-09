/*
 * File:    main.cpp
 Author: James Jordan
 Created on February 16, 2017, 11:17 AM
 *Purpose:A cookie recipe calls for the following ingredients:
 * 1.5 cups of sugar
 * 1 cup of water
 * 2.75 cups of flour
*  The recipe produces 48 cookies with this amount of ingredients. Write a 
 * program that asks the user how many cookies he or she wants to make then 
 * displays the number of cups of each ingredient needed for the specific 
 * number of cookies
 */
 
  //System Libraries
#include <iostream>    //Input - Output Library
using namespace std; //Name-Space under which systems libraries exist

  //User Libraries

  //Global Libraries

  //Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare variables
    float
    sugar=1.5,   // Sugar measured in cups
    cbutter=1,   // butter measured in cups        
    cflour=2.75,
    batch=48,        
    req,
    amount,        //desired amount of cookies
    rflour,        
    rbutter,
    rsugar;
    //Initialize variables 
    
     // needed cups of butter
     //needed cups of sugar
    //Input Data
    
    //Map inputs to outputs or process the data
     cout<<"Please enter the amount of cookies you wish to make\n ";
     cin>>amount;
     req=amount/batch;
     rflour=req*cflour;
     rbutter=cbutter*req; //needed cups of butter
    rsugar=sugar*req;
     cout<<"because you wish to make "<<amount<<" cookies ";
    //outputs the transformed data
     cout<<"you require \n"<< rflour <<" cups of flour! "<<endl;
     cout<<rbutter<<" cups of butter!"<<endl;
     cout<<rsugar <<" cups of sugar! " ;
     
    //Exit stage right!
return 0;
}