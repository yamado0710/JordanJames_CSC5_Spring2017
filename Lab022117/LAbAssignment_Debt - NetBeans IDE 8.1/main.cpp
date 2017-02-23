/*
File:   main.cpp
  //Author: James Jordan
  //Created on 2/21, 2017, 11:57 AM
  //Purpose: Calculate the per/person debt in the US and its percentage increase.
*/

//System Libraries Here
#include <iostream>
using namespace std; //Name space under which system libraries exist.

//User Libraries Here

//Global Constants (PI, e, Gravity, or conversions), No Global Variables
 const float PERCENT=100.0f;    //Percentage
 const float MILLION=1.0e6f;    // conversion to billions
 const float TRILLION=1.0e12f;  //Conversion to trillions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here and Initialize
 
  float fDt2008=9.78e12f;  //9.7 Trillion $'s 2008 Fed Debt
  float fDt2016=20.e12f;   //20. Trllion  $'s 2016 Fed Debt
  float pop2008=304e6f;    //304 Million Population 2008
  float pop2016=322e6f;    //322 Million Population 2016
  float per2008,per2016;   //Personal Debt
  float perChng,mulChng;   //Percentage and multiplicative change
  float ppChng;            //Per person change in debt
    
    //Input or initialize values Here
 per2008=fDt2008/pop2008;                     //Debt per person circa 2008
 per2016=fDt2016/pop2016;                     //Debt per person circa 2016
 perChng=(fDt2016-fDt2008)/fDt2008*PERCENT;   //Percent change between 2016 and 2008 in per person debt
 mulChng=fdt2016/fdt2008;                     // multiplicative change between 2016 and 2008
 ppChng=(per2016-per2008)/per2008*PERCENT;    // per person change in debt
    //Process/Calculations Here
 
    //Output Located Here
 
 cout<<"Federal Debt 2008 =$ "<<fDt2008/TRILLION<<"trillion"<<endl;       
 cout<<"Federal Debt 2016 =$ "<<fDt2016/TRILLION<<"trillion"<<endl;
 cout<<"US population 2008 = "<<pop2008/Million<<" million "<<endl;
 cout<<"US population 2016 = "<<pop2016/Million<<" million "<<endl;
 cout<<"Percentage change in debt ="<<perChng<<"%"<<endl;
 cout<<"Multiplicative change in debt ="<<mulChng<<"x"<<endl;
 cout<<"Per person debt in 2008 = $"<<per2008<<endl;
 cout<<"Per person debt in 2016 = $"<<per2016<<endl;
 cout<<"Per person % change in debt = "<<ppChng<<"%"<<endl; 
    //Exit
    return 0;
}

