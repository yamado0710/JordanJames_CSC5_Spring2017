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
    
    //Declare and initialize variables
    float fedTax=0.184f; //Federal Tax 8.4 cents per gallon
    float caTax=0.390f;  //California excise tax 39 cents per gallon state tax
    float cpTax=0.100f; //California cap and trade tax 10 cents per gallon
    float caSlsTx=0.08f;   //California state sale tax 8 percent
    float oilPrft=0.07f; //Oil Company profit in cents per gallon      
    float pumpPr,basePr; //Pump price and base price in $'s
    float pctTax,pctPrft; //Percentage tax, Percentage profit

    //Input Data
    cout<<"what price did you pay at the pump $'s/gallon"<<endl;
    cin>>pumpPr;
    
    //Map inputs to outputs or process the data
    basePr=(pumpPr-fedTax-caTax-cpTax)/(1+caSlsTx);
    pctTax=(basePr*caSlsTx+fedTax+caTax+cpTax)/basePr*PERCENT; 
    pctPrft=oilPrft/basePr*PERCENT; 
    //outputs the transformed data
     cout<<"Federal tax/gallon           = $"<<fedTax<<endl;
     cout<<"California tax/gallon        = $"<<caTax<<endl;
     cout<<"Cap and trade tax/gallon     = $"<<cpTax<<endl;
     cout<<"California sales tax/gallon  = $"<<caSlsTx*basePr<<endl;
     cout<<"Base Price/gallon            = $"<<basePr<<endl;
     cout<<"Oil company profit/gallon    = $"<<pctPrft<<"%"<<endl;
     cout<<"Total percentage tax/Gallon  = $"<<pctTax<<"%"<<endl;
      
    //Exit stage right!
return 0;
}
