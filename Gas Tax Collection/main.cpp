/*
 * File:    main.cpp
 Author: James Jordan
 Created on February 16, 2017, 11:17 AM
 *Purpose: to experiment with C in by calculating the price of gas after taxes
* 
 */
 
  //System Libraries
#include <iostream>    //Input - Output Library

using namespace std; //Name-Space under which systems libraries exist

  //User Libraries

  //Global Constants
const float PERCENT=100.0f; 

  //Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare variables
    float bsprce=
    float fedTaxg=0.184f; //8.4 cents per gallon
    float caTaxg=0.390f;  //39 cents per gallon state tax
    float cptTaxg=0.100f; //10 cents per gallon
    float sstTaxg=0.08f;   //state sale tax 8 percent
    float ocPrfg=0.07f; //Oil Company profit/Gallon      
    float pumpPr,basePr;
    float pctTax,pctPrft;
    
    //Initialize variables
    pp-sstTaxg-cptTaxg-fedTaxg=bsprce*(1)
    //Input Data
    cout<<"what price did you pay at the pump $'s/gallon"<<endl;
    cin>>pumpPr;
    
    //Map inputs to outputs or process the data
    bsprce=(pumpPr-fedTaxg-caTaxg-cptTax)/(1+sstTaxg);
    pctTax=(bsprce*sstTaxg+fedTaxg+caTaxg+cptTaxg);
    pctPrft=ocPrfg/bsprce*PERCENT;
    //outputs the transformed data
     
    //Exit stage right!
return 0;
}