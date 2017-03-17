/* 
 * File:   main.cpp
 * Author: James Jordan
 * Created on February 12, 2017, 11:37 AM
 * Purpose:Grade program branching excercise
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
    unsigned short score;   //Integer scores valid from 0-100
    char grade;
    //Initialize values Here
    cout<<"This program crushes the dreams of students"<<endl;
    cout<<"The data type is an integer with a range of [0-100]"<<endl;
    cout<<"Type in the score"<<endl;
    cin>>score;
    if(!(score>=0&&score<=100)){
    cout<<"You failed to input an integer between 0 and 100"<<endl;    
    return 1;
    } //use DeMorgans law to make clearer
    //Process/Calculations Here
    if(score>=90&&score<=100)grade='A';
    if(score>=80&&score<=89)grade='B';
    if(score>=70&&score<=79)grade='C';
    if(score>=60&&score<=69)grade='D';
    if(score<=59)grade='F';
    //Output Located Here
    cout<<"For a score = "<<score<<" your grade is an "<<grade<<endl;

    //Exit
    return 0;
}

