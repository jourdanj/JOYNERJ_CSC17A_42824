/* 
 * File:   main.cpp
 * Author: Jourdan
 * Created on March 3, 2016, 9:38PM
 * Purpose: Gaddis Problem 3.13
 */

#include <iostream>
#include <iomanip>

using namespace std;

//user libraries

//global constants

//function prototypes

int main(int argc, char** argv) {

    //declare variables
    float   value=0,    //property value
            asval=0,    //assessment value of property
            ptax=0;     //property tax
            
    //user input
    cout<<"Input Property Value:\n";
    cin>>value;
    
    //calculations
    asval=value*0.6f;
    ptax=(asval/100.0f)*0.64f;
    
    //output
    
    cout<<"Assessment Value:"<<setw(10)<<" $"<<fixed<<setprecision(2)<<asval<<endl;
    cout<<"Property Tax:"<<setw(16)<<" $"<<ptax<<endl;
            
    return 0;
}

