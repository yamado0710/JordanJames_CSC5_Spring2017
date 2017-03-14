    /* 
     * File:   main.cpp
    * Author: James Jordan
    * Created on February 12, 2017, 11:37 AM
    * Purpose: Truth Table
    */

    //System Libraries Here
    #include <iostream>
    using namespace std;

    //User Libraries Here

    //Global Constants Only, No Global Variables
    //Like PI, e, Gravity, or conversions

    //Function Prototypes Here

    //Program Execution Begins Here
    int main(int argc, char** argv) {
    //Declare all Variables Here
    bool x,y;
    
    //Output the table Header
    cout<<"X Y !x !Y X||Y X&&Y X^Y X^Y^Y X^Y^X !(X||Y) !(X&&Y) !X||!Y"<<endl;
    
    
    //Determine first row in the table
    x=true;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<" " ;
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<" ";
    cout<<endl;
    
    //Determine second row in the table
    x=true;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<" ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x&&y?'T':'F')<<"  ";
    cout<<endl;
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}

