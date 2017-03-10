/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <string>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int adltick,cldtick,gboprft,amntpd;
    string name;
    float nboprft;
    //movie name, adult tickets sold, child tickets, gross box office profit,
    //net box office profit, amount paid to distributors
    
    //Input or initialize values Here
    
    //Process/Calculations Here
cout<<"Enter the name of the movie \n"; getline (cin,name);
cout<<"the number of adult movie tickets sold  \n"; cin>>adltick;
cout<<"The number of child tickets sold \n"; cin>>cldtick ;
gboprft=(10*adltick)+(6*cldtick) ;
nboprft=(gboprft*0.20f) ;
amntpd=gboprft-nboprft ;        
    //Output Located Here
cout<<name<<endl ;
cout<<"Adult tickets Sold "<<adltick<<endl ;
cout<<"Child tickets Sold "<<cldtick<<endl ;
cout<<"Gross box office profit "<<gboprft<<endl ;
cout<<"Net Box Office Profit "<<nboprft<<endl ;
cout<<"Amount paid to distributor "<<amntpd<<endl ;

    //Exit
    return 0;
}

