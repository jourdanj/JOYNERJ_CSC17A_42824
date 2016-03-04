/* 
 * File:   main.cpp
 * Author: Jourdan Joyner
 * Created on March 3, 2016, 9:53 AM
 * Purpose: Gaddis Problem 3.12
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//user libraries

//global constants

//function prototypes
void Report(string, int, float, float, float, float);

int main(int argc, char** argv) {
    
    //declare variables
    string  month = ""; //month
    int     year;           //year
    float   contax=0.02f,    //county tax
            slstax=0.04f,    //sales tax
            totamt=0,         //total amount collected
            sales=0,          //amount not including taxes
            totcon=0,         //total amount of county tax
            totsls=0;         //total amount of sales tax
    
    //prompt user
    cout<<"Input month\n";
    cin>>month;
    cout<<"Input year\n";
    cin>>year;
    cout<<"Input total amount collected\n";
    cin>>totamt;
    
    //calculate
    sales = totamt/(1.0f+contax+slstax);//calculation for the totsales b4 taxes
    totcon = sales*contax;//calculation for total county tax
    totsls = sales*slstax;//calculation for total state tax
    
    Report(month,year,totamt,sales,totcon,totsls);

    return 0;
}
//Report-passes in calculations and outputs report//
void Report(string a, int b, float c, float d, float e, float f){
    
    cout<<"Month: "<<a<<" "<<b<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"Total Collected :"<<setw(15)<<fixed<<setprecision(2)<<"$ "<<setw(10)<<c<<endl;
    cout<<"Sales :"<<setw(25)<<fixed<<"$ "<<setw(10)<<d<<endl;
    cout<<"County Sales Tax :"<<setw(14)<<fixed<<"$ "<<setw(10)<<e<<endl;
    cout<<"State Sales Tax :"<<setw(15)<<fixed<<"$ "<<setw(10)<<f<<endl;
    cout<<"Total Sales Tax :"<<setw(15)<<fixed<<"$ "<<setw(10)<<e+f<<endl;
}
